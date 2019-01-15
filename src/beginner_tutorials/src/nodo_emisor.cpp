#include "ros/ros.h"
#include "beginner_tutorials/mensajeTest.h"
/**
* Este nodo llamado nodo_emisor emite mensajes "mensajeTest_topic"
del tipo beginner_tutorials::mensajeTest
*/
int main(int argc, char **argv) {
ros::init(argc, argv, "nodo_emisor"); //registra el nombre del nodo
ros::NodeHandle nodo;
//Creamos un objeto nodo
ROS_INFO("nodo_emisor creado y registrado"); //to screen and file
//es necesario "advertir" el tipo de mensaje a enviar y como lo hemos llamado (el topic). En este caso es de tipo userInfo y el topicse llama user_info_topic
ros::Publisher publicadorMensajes = nodo.advertise<beginner_tutorials::mensajeTest>("mensajeTest_topic",0);
//tiempo a dormir en cada iteracción
ros::Duration seconds_sleep(1);
//ejecuta constantemente hasta recibir un Ctr+C
int contador = 0;
while (ros::ok()){
//instancimaos un mensaje que queremos enviar
beginner_tutorials::mensajeTest mensajeAEnviar;
//en el mensaje enviamos el número de veces que se ha iteradoen este bucle
mensajeAEnviar.numero = contador;
//se publica el mensaje
publicadorMensajes.publish(mensajeAEnviar);
//en este programa no es necesario spinOnce, pero si tuviera una funcion de callback es imprescindible para que se ejecute
ros::spinOnce();
ROS_DEBUG ("Se duerme el nodo emisor durante un segundo");
//dormimos el nodo durante un tiempo
seconds_sleep.sleep();
//incrementamos el contador
contador++;
}
}
