#pragma once

#include <iostream>
//#include <cppm-diploma-dll.dll>
#include <cls_unit.h>
#include <cls_air.h>
#include <cls_broom.h>
#include <cls_eagle.h>
#include <cls_magic_carpet.h>
#include <cls_ground.h>
#include <cls_camel.h>
#include <cls_camel_fast.h>
#include <cls_boots.h>
#include <cls_centaur.h>
/*
#include "cppm-diploma-dll/cls_unit.h"
#include "cppm-diploma-dll/cls_air.h"
#include "cppm-diploma-dll/cls_broom.h"
#include "cppm-diploma-dll/cls_eagle.h"
#include "cppm-diploma-dll/cls_magic_carpet.h"
#include "cppm-diploma-dll/cls_ground.h"
#include "cppm-diploma-dll/cls_camel.h"
#include "cppm-diploma-dll/cls_camel_fast.h"
#include "cppm-diploma-dll/cls_centaur.h"
#include "cppm-diploma-dll/cls_boots.h"
*/

class Race
{
    
public:
    Race();
    enum UnitName
    {
        VEHICLE_BOOTS = 1, 
        BROOM,             
        CAMEL,             
        CENTAUR,           
        EAGLE,             
        CAMEL_FAST,       
        MAGIC_CARPET       
    };


    int GetType();     
    int GetDistance(); 

    void Register(bool mess = true); 

    size_t GetSize(); 
    void Result(); 

private:
    int type_sim;     
    int distance_sim; 

    Race::UnitName* transport;
    size_t sizeTransport;



    void SetType();     
    void SetDistance(); 

    bool ValidateRegister(Race::UnitName name); 
    bool OneTransport(Race::UnitName name);     

    void DelTransp();

    std::string GetName(Race::UnitName name);

    double GetTime(Race::UnitName name);

    void PushArray(Race::UnitName*& transp, size_t& size, Race::UnitName value);

    void SortArray(Race::UnitName*& arr); 
};
