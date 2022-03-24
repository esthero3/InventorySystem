AUTHOR: Esther Osammor

FILES: README.txt
        (description: this current file)

       - List.cc
          (description: List class implementation. Contains the necessary info to implement the List class.
            container object for Products.)
       - List.h
          (description: List header file. Contains all function prototypes and member variables for the List class)

       - defs.h
          (description: contains global definitions that other classes may use)

       - Location.cc
          (description: Location class implementation. Contains the necessary info to implement the Location class.
            virtual base class for StoreLocation and WHLocation)
       - Location.h
          (description: Location header file. Contains all function prototypes and member variables for the Location class)

       - main.cc
          (description: execution point for the program)

       - Makefile
          (description: compiles all the files listed into a single executable 'a2')

       - Product.cc
          (description: Product class implementation. Contains the necessary info to implement the Product class.
            Contains information about the product, including the StoreLocation and WHLocations it is stored in.)
       - Product.h
          (description: Product header file. Contains all function prototypes and member variables for the Product class)

       - Queue.cc
          (description: Queue class implementation. Contains the necessary info to implement the Queue class.
            A first-in-first-out (FIFO) data structure for storing WHLocations. The FIFO nature of the data structure
            ensures that we use older stock first.)
       - Queue.h
          (description: Queue header file. Contains all function prototypes and member variables for the Queue class)

       - Store.cc
          (description: Store class implementation. Contains the necessary info to implement the Store class.
            Provides an interface for interacting with the inventory system.)
       - Store.h
          (description: Store header file. Contains all function prototypes and member variables for the Store class)

       - StoreLocation.cc
          (description: StoreLocation class implementation. Contains the necessary info to implement the StoreLocation class.
            Concrete implementation for in-store product locations.)
       - StoreLocation.h
          (description: StoreLocation header file. Contains all function prototypes and member variables for the StoreLocation class)

       - WHLocation.cc
          (description: WHLocation class implementation. Contains the necessary info to implement the WHLocation class.
          Concrete implementation for warehouse product locations.)
       - WHLocation.h
          (description: WHLocation header file. Contains all function prototypes and member variables for the WHLocation class)

       - Control.cc
          (description: Control class implementation. Contains the necessary info to implement the Control class.
            controls the running of tests)
       - Control.h
          (description: Control header file. Contains all function prototypes and member variables for the Control class)

       - View.cc
          (description: View class implementation. Contains the necessary info to implement the View class.
            takes input from the user regarding the tests)
            
       - View.h
          (description: View header file. Contains all function prototypes and member variables for the View class)

COMPILATION INSTRUCTIONS: Ensure all the files listed above are in the same directory. Open that directory in terminal and input 'make' this will compile all the files into
                          an executable named a3 which you can then run by inputting './a3'. Once you run it, you can then follow the program prompts to test the program and
                          see the outputs.
