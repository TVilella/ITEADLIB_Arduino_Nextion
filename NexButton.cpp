/**
 * @file NexButton.cpp
 *
 * The implementation of class NexButton. 
 *
 * @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date    2015/8/13
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "NexButton.h"

NexButton::NexButton(uint8_t pid, uint8_t cid, const char *name)
    :NexTouch(pid, cid, name)
{
}

uint16_t NexButton::getText(char *buffer, uint16_t len)
{
    String cmd;
    cmd += "get ";
    cmd += getObjName();
    cmd += ".txt";
    sendCommand(cmd.c_str());
    return recvRetString(buffer,len);
}

bool NexButton::setText(const char *buffer)
{
    String cmd;
    cmd += getObjName();
    cmd += ".txt=\"";
    cmd += buffer;
    cmd += "\"";
    sendCommand(cmd.c_str());
    return recvRetCommandFinished();    
}


uint32_t NexButton::getBco(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".bco";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setBco(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".bco=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd="";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getBco2(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".bco2";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setBco2(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".bco2=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd="";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getPco(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".pco";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setPco(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pco=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getPco2(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".pco2";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setPco2(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pco2=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getXcen(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".xcen";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setXcen(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".xcen=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getYcen(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".ycen";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setYcen(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".ycen=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getFont(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".font";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setFont(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".font=";
    cmd += buf;
    sendCommand(cmd.c_str());

	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getPicc(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".picc";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setPicc(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getPicc2(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".picc2";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setPicc2(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".picc2=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getPic(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".pic";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setPic(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pic=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}

uint32_t NexButton::getPic2(uint32_t *number)
{
	String cmd;
	cmd += "get ";
	cmd += getObjName();
	cmd += ".pic2";
	sendCommand(cmd.c_str());
	return recvRetNumber(number);
}

bool NexButton::setPic2(uint32_t number)
{
	char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".pic2=";
    cmd += buf;
    sendCommand(cmd.c_str());
	
	cmd = "";
	cmd += "ref ";
	cmd += getObjName();
	sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}
