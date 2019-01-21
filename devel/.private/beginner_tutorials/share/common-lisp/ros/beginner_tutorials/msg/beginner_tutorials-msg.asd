
(cl:in-package :asdf)

(defsystem "beginner_tutorials-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "mensajeTest" :depends-on ("_package_mensajeTest"))
    (:file "_package_mensajeTest" :depends-on ("_package"))
  ))