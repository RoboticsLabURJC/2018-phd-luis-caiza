#In a terminal launch PX4
cd 2018-phd-luis-caiza/Firmware
no_sim=1 make px4_sitl_default gazebo


#In a new terminal launch PX4
cd 2018-phd-luis-caiza/build/plannar_mover/
export GAZEBO_PLUGIN_PATH=`pwd`:$GAZEBO_PLUGIN_PATH
cd
cd 2018-phd-luis-caiza/Firmware
source Tools/setup_gazebo.bash $(pwd) $(pwd)/build/px4_sitl_default
cd ..
roslaunch gazebo_ros empty_world.launch world_name:=$(pwd)/src/follow_ball/world/follow_ball.world


#In a new terminal launch PX4
rosrun teleop_twist_keyboard teleop_twist_keyboard.py


#In another terminal launch mavros
cd 2018-phd-luis-caiza/Firmware
roslaunch mavros px4.launch fcu_url:="udp://:14540@127.0.0.1:14540"


#In another terminal launch follow road
cd 2018-phd-luis-caiza/src/follow_road/
python follow_road.py 



