Mekabot M3 Installation instructions
==============


This wiki describes the full installation of m3 software to control/simulate the Meka robot at CITEC.

Thanks a lot to Antoine Hoarau for making all of his work public and helping us to port it to our robot.

This installation supports 3 versions, depending on your needs : 
- Only the M3 python API for development
- Real-time M3 (c++ and python) for development and simulation
- Real-time M3 for Meka's real-time PC (same as above but with EtherCAT component)

| ***OS Tested*** | ***Status*** | ***Notes***
|:------------------|:----:|:---------------:
| Ubuntu 12.04 x86 | ? | w ROS Hydro 
| Ubuntu 12.04 x64 | ? | w ROS Hydro
| Ubuntu 13.10 x86 | ? | w ROS Indigo 
| Ubuntu 14.04 x64| ? | w ROS Indigo/MoveIt! 
| **KUbuntu 16.04LTS x64**| ? | w ROS Kinetic(shadow-fixed)/MoveIt! 


> Current version on the Meka : KUbuntu 16.04LTS on kernel 3.14.7, rtai4.1-test1



### Prerequisites
All Information in this section apply to:
meka-man 
meka-marbel 
meka-matter 
meka-gpu

#### Basics
- install Ubuntu 16.04
- enable autologin
- disable kwallet subsystem
- set up wifi connection



#### Recommended Packages
Add ROS Shadow-Fixed Repo. See: http://wiki.ros.org/ShadowRepository
```bash
sudo apt-get install
```
TODO: add final package list here


> Note : if you only want the **python** interface, jump to the "install Mekabot" section.

### The RTAI-patched kernel

See: https://github.com/semeyerz/m3installation/blob/master/rtai-kernel-build.md
> You can also [compile your own kernel](https://github.com/ahoarau/m3installation/blob/master/rtai-kernel-build.md)
> have a look at this as well: https://github.com/ahoarau/mekabot/wiki/Meka-mob-%28RTPC%29-configuration

#### Installation
inux-headers-3.14.17-rtai-4.1_3.14.17-rtai-4.1-10.00.Custom_amd64.deb
linux-image-3.14.17-rtai-4.1_3.14.17-rtai-4.1-10.00.Custom_amd64.deb

```bash
sudo dpkg -i --force-all $headers $image
```

Now **boot** on the new kernel using **grub** at **startup**. Please note the name of the kernel.
> Note : you might have to either hold shift on startup or update the grub config to boot on the rtai patched kernel: 
```bash
sudo nano /etc/defaults/grub
```

#### (Recommended) Configure your kernel boot options
```bash
sudo nano /etc/default/grub
# Then edit the following line: 
GRUB_CMDLINE_LINUX_DEFAULT="quiet splash"
# To :
GRUB_CMDLINE_LINUX_DEFAULT="quiet splash lapic=notscdeadline noapic acpi=off clocksource=tsc hpet=disable i915.i915_enable_rc6=0 i915.powersave=0 intel_idle.max_cstate=0 processor.max_cstate=0 idle=poll"

and maybe add this:
GRUB_DEFAULT=saved
GRUB_SAVEDEFAULT=true

## Explanation
# lapic=notscdeadline : usefull for i5 and i7 processors, reduces latency by a factor of 10 on the meka-mob
# hpet=disable : rtai does not like hpet, so disable it to make sure it never uses it (it should not). Not mandatory as rtai is smart enough to not use it.
# i915.i915_enable_rc6=0 : disable deep sleep for processor, we want max power.
# intel_idle.max_cstate=0, processor.max_cstate=0 :  same as above
# i915.powersave=0 : disable the power management, i.e less interruptions.
# idle=poll : Poll forces a polling idle loop that can slightly improve the performance of waking up a idle CPU, but will use a lot of power and make the system run hot. Set CPU fan to maximum all the time (in bios). 

# Theses option will provide you ~300 nanosecond latencies (which is very low, so, very good).



# Then apply the update:
sudo update-grub
sudo reboot
```


### RTAI 4.1.1 installation 
#### Download
```bash
wget https://www.rtai.org/userfiles/downloads/RTAI/rtai-4.1.1.tar.bz2
tar xfvj rtai-4.1.1.tar.bz2

```

#### Installation
```bash
cd rtai-4.1.1/
make menuconfig
# Configure the Number of cpus you have, and uncheck oneshot timer
make
sudo make install
```
> Notes: Rtai libraries, modules headers etc should be installed in /usr/realtime/, and that makes everyone's life easier.

> ----
> **Know issues** : On 64-bit CPUs, if an error regarding -mpreferred-cache-boundary=3 shows up, edit line 57 in /usr/src/linux/arch/x86/Makefile (where linux is your rtai patched kernel) to set this parameter to 4:
```bash
sudo gedit  /usr/src/linux/arch/x86/Makefile
# 57: KBUILD_CFLAGS += $(call cc-option,-mno-sse -mpreferred-stack-boundary=4)
```
Part of the explanation: http://mail.rtai.org/pipermail/rtai/2013-December/026198.html

> ----
> **Know issues** : on 12.04 32 bits machines, rtai fails to compile (some header is missing)
```bash
sudo apt-get install gcc-multilib g++-multilib libc6-dev
sudo ln -s /usr/include/i386-linux-gnu/gnu/stubs-32.h /usr/include/gnu/stubs-32.h
```

### Post install
Update the ld library path to find rtai:
```bash
sudo -s
echo /usr/realtime/lib/ > /etc/ld.so.conf.d/rtai.conf
exit
sudo ldconfig
```


## Install ROS
```bash
sudo sh -c "echo 'deb http://packages.ros.org/ros/ubuntu $(lsb_release -cs) main' > /etc/apt/sources.list.d/ros-latest.list"
```

> If on Ubuntu < 13.10
```bash
ROS_DISTRO=hydro
```

> If on Ubuntu > 13.10
```bash
ROS_DISTRO=indigo
```

#### ROS + MoveIt! + ROS Control
```bash
wget http://packages.ros.org/ros.key -O - | sudo apt-key add -
sudo apt-get update
sudo apt-get install ros-$ROS_DISTRO-desktop-full ros-$ROS_DISTRO-moveit-* ros-$ROS_DISTRO-ros-control ros-$ROS_DISTRO-ros-controllers python-rosinstall python-pip
```

You can check the ros_control implementation in the [wiki](https://github.com/ahoarau/mekabot/wiki).


```bash
sudo -E rosdep init
rosdep update
```
#### Openni (ROS Hydro Only)
```bash
sudo apt-get install ros-$ROS_DISTRO-openni*
```

#### Create the ROS-workspace
```bash
source /opt/ros/$ROS_DISTRO/setup.bash
## Create the ROS-workspace
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
catkin_init_workspace
cd ~/catkin_ws/
catkin_make
```

##Install Mekabot M3

### Download
```bash
git clone https://github.com/CentralLabFacilities/mekabot.git ~/mekabot
cd ~/mekabot
git submodule init
git submodule update
git submodule foreach git checkout master
```
### Installation
#### Holomni PCV for the mobile base
> If on Ubuntu 14.04 LTS:
```bash
sudo -E add-apt-repository ppa:hoarau-robotics/ppa
sudo apt-get update
sudo apt-get install holomni-pcv
```
> If not :
```bash
cd ~/mekabot
cd holomni_pcv
mkdir build;cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j$[$(nproc)+1]
sudo make install
```

#### Mekabot

```bash
cd ~/mekabot
mkdir build;cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j$[$(nproc)+1]
sudo make install
```
> Note : 
> * Compiling in Release makes the M3 system **twice** as fast (Essentially due to KDL). 
> * If you are running on real hardware, install [EtherCAT](https://github.com/CentralLabFacilities/ethercat-drivers) first, then compile Mekabot with -DETHERCAT=1 and in release as above.

## Update your bashrc
```bash
touch ~/.m3rc
echo '
##################################################################
## Meka

## The M3 Software environnement setup
source /usr/local/share/setup.bash

## Meka config files location
export M3_ROBOT=~/mekabot/m3bie/real_meka

## Virtual Config onverlay
export M3_ROBOT=$M3_ROBOT:~/mekabot/m3bie/virtual_meka

## Some python hacks
export MALLOC_CHECK_=0


##################################################################
## ROS

#export ROS_MASTER_URI=http://meka-moch:11311 # If on real Meka, roscore is launched from meka-moch
#export ROS_IP=192.168.20.117 # Fix here your IP to avoid conflicts on Meka
source /opt/ros/indigo/setup.bash # Can be Hydro or Indigo

##################################################################
## ROS-workspace
source ~/catkin_ws/devel/setup.bash
source ~/catkin_ws/devel_isolated/setup.bash
source ~/catkin_ws/install_isolated/setup.bash

##################################################################
## Additional Meka-stuff

export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/mekabot/m3bie-demos/ros:~/mekabot/m3bie-tutos/ros:~/mekabot/m3bie-utils/ros:~/mekabot/meka-ros-pkg:~/mekabot/m3core/ros:~/mekabot/m3meka/ros
export PYTHONPATH=$PYTHONPATH:~/mekabot/m3bie-demos/scripts:~/mekabot/m3bie-utils/scripts:~/mekabot/m3bie-utils/python:~/mekabot/m3bie-utils/ros
'>>~/.m3rc

echo 'source ~/.m3rc' >> ~/.bashrc
source ~/.bashrc
```
### (Recommended) Compile Legacy shared memory ROS
```
cd ~/catkin_ws/src
ln -snf ~/mekabot/m3core/ros m3core_ros
ln -snf ~/mekabot/m3meka/ros m3meka_ros
cd ~/catkin_ws
catkin_make_isolated
catkin_make_isolated
catkin_make
```


### Get time synchronization for ROS (Highly recommended)
```bash
sudo apt-get install ntp
sudo nano /etc/ntp.conf
```
Comment all the servers lines and add 'server ensta.ensta.fr'.
It should look like that : 
```bash
#server 0.ubuntu.pool.ntp.org
#server 1.ubuntu.pool.ntp.org
#server 2.ubuntu.pool.ntp.org
#server 3.ubuntu.pool.ntp.org
server stratum2-1.ntp.techfak.uni-bielefeld.de burst iburst
server stratum2-2.ntp.techfak.uni-bielefeld.de burst iburst
server stratum2-3.ntp.techfak.uni-bielefeld.de burst iburst
server stratum2-4.ntp.techfak.uni-bielefeld.de burst iburst

# Use Ubuntu's ntp server as a fallback
server ntp.ubuntu.com
```
```bash
sudo service ntp restart
```

> (OPTIONAL) Force the time to update every day (can drift after long shutdown) 
```bash
sudo -s
touch /etc/cron.daily/ntpdate
echo '#!/bin/sh
ntpdate ensta.ensta.fr'>>/etc/cron.daily/ntpdate
exit
sudo chmod 755 /etc/cron.daily/ntpdate
```


### (Recommended) Install some IDEs

#### Python (for most users): Eclipse + PyDev or spyder
```bash
sudo apt-get install eclipse spyder
```

#### ROS and C++ Real-time (Advanced users): Qt creator and/or Kdevelop
```bash
sudo apt-get install qtcreator 
sudo apt-get install kdevelop
```


### (OPTIONAL) Setup robot's Pcs :

TODO: update IPs

```bash
sudo -s
echo '192.168.20.X meka-man'>>/etc/hosts
echo '192.168.20.X meka-marbel'>>/etc/hosts
echo '192.168.20.X meka-mariposa'>>/etc/hosts
exit
```

## Configure your virtual installation
This scripts just updates the hostname in your m3_config.yml, that tells which computer is running the m3rt_server. On the meka it's meka-mob, but for vitual installtions, it's your computer!

```bash
configure_robot_config_virtual.py
```

## Run the server and visualize the robot on Rviz (virtual installation)
```bash
# run the realtime server
m3rt_server_run 
# In another terminal :
# Launch roscore, robot description, robot state publisher, joint state publisher and rviz
roslaunch meka_description m3ens_viz.launch 
```

## You're done !

Checkout the [wiki](https://github.com/ahoarau/mekabot/wiki) for more info !


>  *Maintainer* : Sebastian Meyer zu Borgsen <semeyerz@techfak.uni-bielefeld.de>
>  *Credits to* : Antoine Hoarau <hoarau.robotics@gmail.com>
