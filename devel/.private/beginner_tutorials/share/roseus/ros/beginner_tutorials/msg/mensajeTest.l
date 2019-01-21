;; Auto-generated. Do not edit!


(when (boundp 'beginner_tutorials::mensajeTest)
  (if (not (find-package "BEGINNER_TUTORIALS"))
    (make-package "BEGINNER_TUTORIALS"))
  (shadow 'mensajeTest (find-package "BEGINNER_TUTORIALS")))
(unless (find-package "BEGINNER_TUTORIALS::MENSAJETEST")
  (make-package "BEGINNER_TUTORIALS::MENSAJETEST"))

(in-package "ROS")
;;//! \htmlinclude mensajeTest.msg.html


(defclass beginner_tutorials::mensajeTest
  :super ros::object
  :slots (_numero ))

(defmethod beginner_tutorials::mensajeTest
  (:init
   (&key
    ((:numero __numero) 0)
    )
   (send-super :init)
   (setq _numero (round __numero))
   self)
  (:numero
   (&optional __numero)
   (if __numero (setq _numero __numero)) _numero)
  (:serialization-length
   ()
   (+
    ;; uint32 _numero
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _numero
       (write-long _numero s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _numero
     (setq _numero (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get beginner_tutorials::mensajeTest :md5sum-) "b32de927a501baab19ed61de1e6e9fe3")
(setf (get beginner_tutorials::mensajeTest :datatype-) "beginner_tutorials/mensajeTest")
(setf (get beginner_tutorials::mensajeTest :definition-)
      "uint32 numero

")



(provide :beginner_tutorials/mensajeTest "b32de927a501baab19ed61de1e6e9fe3")


