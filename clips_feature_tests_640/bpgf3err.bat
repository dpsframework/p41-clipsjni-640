(defgeneric ())
(if (> 3 4))
(deffacts info (fact ?x))
(defmethod foo () (+ ?a 2))
(deffunction foo ($?wild ?a))
(deffunction foo (?a ?a))
(assert (fact 1 (fact 2)))
(assert ())
(assert)
(+ (~ 3 4) 4)
(xyz)
(<= ~ 4)
(defrule error (declare (priority 10)) =>)
(defrule error (declare (salience a)) =>)
(defrule error (declare (salience 20000)) =>)
(defrule error (or) =>)
(defrule error (not ?f <- (fact)) =>)
(defrule error () =>)
(defrule error (test (> 3 4)) =>)
(defrule error (a) (logical (b)) =>)
(defrule error (logical (a)) (b) (logical (c)) =>)
(defrule error => (assert (a ?f)))
(defrule error => (retract ?f))
(defrule error (fact) (test (> ?f 4)) =>)
(defrule error ?f <- (a ?f) =>)
(defrule error ?f <- (a) ?f <- (b) =>)
(defrule error (a ~?f) =>)
(deftemplate error (multifield x) (multifield y))
(deftemplate error (field x (allowed-types word)))
(deftemplate example (field x (default a) (default b)))
(deftemplate error (multifield x (default 3 ?NONE)))
(deftemplate error (multifield x (default ?NONE 3)))
(deftemplate error (field x (default ~)))
(deftemplate error (field x (default)))
(deftemplate example (field x))
(assert (example (x)))
(assert (example (x a b)))
(defrule error ?f <- (example) => (modify ?f (x)))
(defrule error ?f <- (example) => (modify ?f (x 3 4)))
(deftemplate example (field x))
(assert (example (x =(create$ a b c))))
(deftemplate example (field x))
(assert (example (x a) (x b)))
(deftemplate example (field x))
(defrule error (example|other (x 3)) =>)
(deftemplate example (field x))
(defrule error (example (z 3)) =>)
(undeftemplate example)
(defrule error ?f <- (example) => (modify ?f (x 3)))
(defrule error => (modify 1 (x 3)))
(deftemplate example (field x (type INTEGER)))
(defrule testit (example (x a)) =>)
(deftemplate example (field x (type INTEGER)))
(assert (example (x =(float 3))))
(deftemplate example (field x (allowed-integers 1 2 3)))
(defrule testit (example (x 4)) =>)
(deftemplate example (field x (range 1 3)))
(assert (example (x 4)))
(deftemplate example1 (field x (type SYMBOL) 
                                      (allowed-integers 1 2 3)))
(deftemplate example2 (field x (range 1 3)
                                      (default 5)))
(deftemplate example3 (field x (type SYMBOL)
                                      (range 1 5)))
(deftemplate example (field x))
(defglobal ?*x* = (create$ a b c))
(assert (example (x ?*x*)))
(deftemplate example (field x (allowed-values a b 2 3) 
                                     (allowed-integers 4 5 6)))
(deftemplate example (field x (allowed-integers 1 2 3) 
                                     (range 4 6)))
(deftemplate example (field x (type ?VARIABLE INTEGER)))
(deftemplate example (field x (type INTEGERFLOAT)))
(deftemplate example (field x (allowed-integers 3.0)))
(deftemplate example 
          (field x (min-number-of-elements 3)))
(defglobal ?x = 3)
(deffunction defgeneric ())
(deffunction + ())
(defgeneric foo)
(deffunction foo ())
(clear)
(deffunction foo)
(deffunction foo (?a abc))
(deffunction foo () (build "(deffunction foo ())"))
(foo)
(defgeneric deffunction)
(clear)
(deffunction foo ())
(defgeneric foo)
(clear)
(defgeneric foo ())
(defgeneric)
(clear)
(defmethod foo 1 ((?a INTEGER)))
(defmethod foo 2 ((?a INTEGER)))
(clear)
(defmethod foo 0 ())
(clear)
(defmethod foo)
(clear)
(defmethod foo (abc))
(clear)
(defmethod foo ((abc)))
(clear)
(defmethod foo ((?a (< ?a 1) INTEGER)))
(clear)
(defmethod foo ((?a INTEGER INTEGER)))
(clear)
(defmethod foo ((?a INTEGER NUMBER)))
(clear)
(defmethod foo ((?a (bind ?b 1))))
(clear)
(defmethod foo ((?a 34)))
(clear)
(defmethod foo ((?a bogus-class)))
(clear)
(defclass A (is-a USER))
(defmethod foo ((?a A LEXEME)))
(defclass A (is-a OBJECT)))
(clear)
(defclass STRING (is-a NUMBER))
(clear)
(defclass A (is-a A))
(clear)
(defclass A (is-a USER USER))
(clear)
(defclass B (is-a A))
(clear)
(defclass A (is-a USER))
(defclass B (is-a A))
(defclass C (is-a B))
(defclass A (is-a C))
(clear)
(defclass A (is-a))
(defclass A (is-a USER)
  (role abstract)
  (role concrete))
(defclass A (is-a USER)
  (slot foo (default 1)
            (default 2)))
(defclass A (is-a USER)
  (slot foo (access read-only)
            (access initialize-only)))
(defclass A (is-a USER)
  (slot foo (default 1 2 3 4)))
(defclass A (is-a USER)
  (slot foo)
  (slot foo))
(defclass A (is-a OBJECT USER))
(defmessage-handler bogus-class foo ())
(defclass A (is-a USER) (role concrete))
(make-instance a of A)
(defmessage-handler A build-new ()
  (build "(defmessage-handler A new ())"))
(send [a] build-new)
(defmessage-handler USER init ())
(clear)
(defclass A (is-a USER)
  (slot foo (create-accessor read-write)))
(defmessage-handler A get-foo ())
(defmessage-handler USER foo (?self:bar))
(defmessage-handler USER foo ()
  (bind ?self 1))
(defmessage-handler USER foo ()
  (dynamic-put bar 1))
(clear)
(defclass A (is-a USER) (role concrete)
  (slot foo (create-accessor write)))
(definstances A-objects
  (a of A 
    (foo (build "(definstances A-objects (b of A))"))))
(reset)
(any-instancep ((?a OBJECT) (?a OBJECT)) TRUE)
(any-instancep ((?a OBJECT) (?b OBJECT)) 
  (bind ?c 1))
(do-for-all-instances ((?a USER)) 
  (if (slot-existp ?a age) then
     (> ?a:age 30))
  (bind ?a (send ?a get-brother)))
