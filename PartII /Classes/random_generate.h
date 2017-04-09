/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   random_generate.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 7:13 AM
 */

#ifndef RANDOM_GENERATE_H
#define RANDOM_GENERATE_H

class random_generate {
public:
	int gn;/*!< No Of Girls */
	int bn;/*!< No of Boys */
    /**
 							* Default Constructer
 							*/random_generate();
   /**
 							* Gift Generate Method*/ void gift_generate();
/**
 							* Data Generate Method 
 							* Boys Girls Info
 							*/    void data_generate();
 
    /**
 							*Method Generates Boy to be searched
 							*/
       void boy_name_generate();
    /**
 							* Default Destructer
 							*/virtual ~random_generate();
private:

};

#endif /* RANDOM_GENERATE_H */

