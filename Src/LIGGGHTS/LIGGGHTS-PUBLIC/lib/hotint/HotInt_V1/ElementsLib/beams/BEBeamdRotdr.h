//#**************************************************************
//# filename:             BEBeamdRotdr.h
//#
//# author:               Gruber, Nachbagauer
//#
//# generated:						
//# description:          
//# comments:
//#
//# Copyright (c) 2003-2013 Johannes Gerstmayr, Linz Center of Mechatronics GmbH, Austrian
//# Center of Competence in Mechatronics GmbH, Institute of Technical Mechanics at the 
//# Johannes Kepler Universitaet Linz, Austria. All rights reserved.
//#
//# This file is part of HotInt.
//# HotInt is free software: you can redistribute it and/or modify it under the terms of 
//# the HOTINT license. See folder 'licenses' for more details.
//#
//# bug reports are welcome!!!
//# WWW:		www.hotint.org
//# email:	bug_reports@hotint.org or support@hotint.org
//#***************************************************************************************
 

virtual void GetdRotdrpos(Matrix& dAdr, const double r1dx, const double r2dx, const double r3dx, const double d1, const double d2, const double d3, const double Ang){
dAdr(1,1) = (Power(r2dx,2) + Power(r3dx,2))/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5);
dAdr(1,2) = -((r1dx*r2dx)/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5));
dAdr(1,3) = -((r1dx*r3dx)/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5));
dAdr(2,1) = (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((r1dx*(-(d3*r2dx) + d2*r3dx)*Cos(Ang))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (d2*r2dx + d3*r3dx)*Sin(Ang)) + (4*r1dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (d2*r1dx*r2dx + d3*r1dx*r3dx - d1*(Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(r1dx*Power(d2*r2dx + d3*r3dx,2)) + Power(d1,2)*r1dx*(Power(r2dx,2) + Power(r3dx,2)) + d1*(d2*r2dx + d3*r3dx)*(-Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*(-((d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(2,2) = ((-2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d2*r2dx*r3dx) + d3*(Power(r1dx,2) + 2*Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (d2*r1dx - 2*d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(-(Power(d1,2)*Power(r1dx,2)*r2dx) - Power(d3,2)*r2dx*Power(r3dx,2) + Power(d2,2)*r2dx*(Power(r1dx,2) + Power(r3dx,2)) + d2*d3*r3dx*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2)) + d1*r1dx*(-2*d3*r2dx*r3dx + d2*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2))))*((d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (d2*r1dx*r2dx + d3*r1dx*r3dx - d1*(Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (4*r2dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(2,3) = ((2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d3*r2dx*r3dx) + d2*(Power(r1dx,2) + Power(r2dx,2) + 2*Power(r3dx,2)))*Cos(Ang) + (-(d3*r1dx) + 2*d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(-(Power(d1,2)*Power(r1dx,2)*r3dx) - Power(d2,2)*Power(r2dx,2)*r3dx + Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2))*r3dx + d2*d3*r2dx*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2)) + d1*r1dx*(-2*d2*r2dx*r3dx + d3*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2))))*((d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (d2*r1dx*r2dx + d3*r1dx*r3dx - d1*(Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (4*r3dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(3,1) = (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d2*r2dx + d3*r3dx)*Cos(Ang)) + (r1dx*(d3*r2dx - d2*r3dx)*Sin(Ang))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))) + (2*(-(r1dx*Power(d2*r2dx + d3*r3dx,2)) + Power(d1,2)*r1dx*(Power(r2dx,2) + Power(r3dx,2)) + d1*(d2*r2dx + d3*r3dx)*(-Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*((-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (4*r1dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d2*r1dx*r2dx + d3*r1dx*r3dx - d1*(Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (-(d3*r2dx) + d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(3,2) = ((-4*r2dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(-(Power(d1,2)*Power(r1dx,2)*r2dx) - Power(d3,2)*r2dx*Power(r3dx,2) + Power(d2,2)*r2dx*(Power(r1dx,2) + Power(r3dx,2)) + d2*d3*r3dx*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2)) + d1*r1dx*(-2*d3*r2dx*r3dx + d2*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2))))*((d2*r1dx*r2dx + d3*r1dx*r3dx - d1*(Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (-(d3*r2dx) + d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d2*r1dx - 2*d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) - (-(d2*r2dx*r3dx) + d3*(Power(r1dx,2) + 2*Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(3,3) = ((-4*r3dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r3dx) - Power(d2,2)*Power(r2dx,2)*r3dx + Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2))*r3dx + d2*d3*r2dx*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2)) + d1*r1dx*(-2*d2*r2dx*r3dx + d3*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2))))*((-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d3*r1dx - 2*d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(d3*r2dx*r3dx) + d2*(Power(r1dx,2) + Power(r2dx,2) + 2*Power(r3dx,2)))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(4,1) = -((r1dx*r2dx)/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5));
dAdr(4,2) = (Power(r1dx,2) + Power(r3dx,2))/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5);
dAdr(4,3) = -((r2dx*r3dx)/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5));
dAdr(5,1) = ((2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d1*r1dx*r3dx) + d3*(2*Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (2*d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(-(r1dx*Power(d2*r2dx + d3*r3dx,2)) + Power(d1,2)*r1dx*(Power(r2dx,2) + Power(r3dx,2)) + d1*(d2*r2dx + d3*r3dx)*(-Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*(-((d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (r2dx*(d1*r1dx + d3*r3dx) - d2*(Power(r1dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (4*r1dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(5,2) = (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((r2dx*(d3*r1dx - d1*r3dx)*Cos(Ang))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (d1*r1dx + d3*r3dx)*Sin(Ang)) + (4*r2dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (r2dx*(d1*r1dx + d3*r3dx) - d2*(Power(r1dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r2dx) - Power(d3,2)*r2dx*Power(r3dx,2) + Power(d2,2)*r2dx*(Power(r1dx,2) + Power(r3dx,2)) + d2*d3*r3dx*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2)) + d1*r1dx*(-2*d3*r2dx*r3dx + d2*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2))))*((d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(5,3) = ((-2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d3*r1dx*r3dx) + d1*(Power(r1dx,2) + Power(r2dx,2) + 2*Power(r3dx,2)))*Cos(Ang) + (d3*r2dx - 2*d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (4*r3dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r3dx) - Power(d2,2)*Power(r2dx,2)*r3dx + Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2))*r3dx + d2*d3*r2dx*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2)) + d1*r1dx*(-2*d2*r2dx*r3dx + d3*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2))))*((d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(6,1) = ((-2*(-(r1dx*Power(d2*r2dx + d3*r3dx,2)) + Power(d1,2)*r1dx*(Power(r2dx,2) + Power(r3dx,2)) + d1*(d2*r2dx + d3*r3dx)*(-Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*((r2dx*(d1*r1dx + d3*r3dx) - d2*(Power(r1dx,2) + Power(r3dx,2)))*Cos(Ang) + (d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (4*r1dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Cos(Ang) + (-(d3*r1dx) + d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((2*d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) - (-(d1*r1dx*r3dx) + d3*(2*Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(6,2) = (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d1*r1dx + d3*r3dx)*Cos(Ang)) + (r2dx*(-(d3*r1dx) + d1*r3dx)*Sin(Ang))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))) + (4*r2dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((r2dx*(d1*r1dx + d3*r3dx) - d2*(Power(r1dx,2) + Power(r3dx,2)))*Cos(Ang) + (d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r2dx) - Power(d3,2)*r2dx*Power(r3dx,2) + Power(d2,2)*r2dx*(Power(r1dx,2) + Power(r3dx,2)) + d2*d3*r3dx*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2)) + d1*r1dx*(-2*d3*r2dx*r3dx + d2*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2))))*((-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Cos(Ang) + (-(d3*r1dx) + d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(6,3) = ((-4*r3dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Cos(Ang) + (-(d3*r1dx) + d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r3dx) - Power(d2,2)*Power(r2dx,2)*r3dx + Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2))*r3dx + d2*d3*r2dx*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2)) + d1*r1dx*(-2*d2*r2dx*r3dx + d3*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2))))*((-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Cos(Ang) + (-(d3*r1dx) + d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d3*r2dx - 2*d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (-(d3*r1dx*r3dx) + d1*(Power(r1dx,2) + Power(r2dx,2) + 2*Power(r3dx,2)))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(7,1) = -((r1dx*r3dx)/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5));
dAdr(7,2) = -((r2dx*r3dx)/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5));
dAdr(7,3) = (Power(r1dx,2) + Power(r2dx,2))/Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),1.5);
dAdr(8,1) = ((-4*r1dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(-(r1dx*Power(d2*r2dx + d3*r3dx,2)) + Power(d1,2)*r1dx*(Power(r2dx,2) + Power(r3dx,2)) + d1*(d2*r2dx + d3*r3dx)*(-Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*((d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(d3*(Power(r1dx,2) + Power(r2dx,2))) + (d1*r1dx + d2*r2dx)*r3dx)*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d1*r1dx*r2dx) + d2*(2*Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (-2*d3*r1dx + d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(8,2) = ((-4*r2dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r2dx) - Power(d3,2)*r2dx*Power(r3dx,2) + Power(d2,2)*r2dx*(Power(r1dx,2) + Power(r3dx,2)) + d2*d3*r3dx*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2)) + d1*r1dx*(-2*d3*r2dx*r3dx + d2*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2))))*(-((d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d2*r1dx*r2dx) + d1*(Power(r1dx,2) + 2*Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (2*d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(8,3) = (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(((-(d2*r1dx) + d1*r2dx)*r3dx*Cos(Ang))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (d1*r1dx + d2*r2dx)*Sin(Ang)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r3dx) - Power(d2,2)*Power(r2dx,2)*r3dx + Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2))*r3dx + d2*d3*r2dx*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2)) + d1*r1dx*(-2*d2*r2dx*r3dx + d3*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2))))*(-((d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (4*r3dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(d3*(Power(r1dx,2) + Power(r2dx,2))) + (d1*r1dx + d2*r2dx)*r3dx)*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(9,1) = ((-4*r1dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Cos(Ang) + (d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(-(r1dx*Power(d2*r2dx + d3*r3dx,2)) + Power(d1,2)*r1dx*(Power(r2dx,2) + Power(r3dx,2)) + d1*(d2*r2dx + d3*r3dx)*(-Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*((-(d3*(Power(r1dx,2) + Power(r2dx,2))) + (d1*r1dx + d2*r2dx)*r3dx)*Cos(Ang) + (-(d2*r1dx) + d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((2*d3*r1dx - d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(d1*r1dx*r2dx) + d2*(2*Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(9,2) = ((-4*r2dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Cos(Ang) + (d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (2*(-(Power(d1,2)*Power(r1dx,2)*r2dx) - Power(d3,2)*r2dx*Power(r3dx,2) + Power(d2,2)*r2dx*(Power(r1dx,2) + Power(r3dx,2)) + d2*d3*r3dx*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2)) + d1*r1dx*(-2*d3*r2dx*r3dx + d2*(Power(r1dx,2) - Power(r2dx,2) + Power(r3dx,2))))*((d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Cos(Ang) + (d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) - (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((2*d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang)) + (-(d2*r1dx*r2dx) + d1*(Power(r1dx,2) + 2*Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang)))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
dAdr(9,3) = (2*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*(-((d1*r1dx + d2*r2dx)*Cos(Ang)) + ((d2*r1dx - d1*r2dx)*r3dx*Sin(Ang))/Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))) + (2*(-(Power(d1,2)*Power(r1dx,2)*r3dx) - Power(d2,2)*Power(r2dx,2)*r3dx + Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2))*r3dx + d2*d3*r2dx*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2)) + d1*r1dx*(-2*d2*r2dx*r3dx + d3*(Power(r1dx,2) + Power(r2dx,2) - Power(r3dx,2))))*((d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Cos(Ang) + (d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)) + (4*r3dx*(Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))*((-(d3*(Power(r1dx,2) + Power(r2dx,2))) + (d1*r1dx + d2*r2dx)*r3dx)*Cos(Ang) + (-(d2*r1dx) + d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)))/(2.*Power(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2),2)*Power((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2)),1.5));
}
virtual void GetdRotdrrot(Matrix& dAdr, const double r1dx, const double r2dx, const double r3dx, const double d1, const double d2, const double d3, const double Ang){
dAdr(1,1) = 0;
dAdr(2,1) = ((-(d2*r1dx*r2dx) - d3*r1dx*r3dx + d1*(Power(r2dx,2) + Power(r3dx,2)))*Cos(Ang) + (d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang))/((Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sqrt((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))));
dAdr(3,1) = ((d3*r2dx - d2*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (d2*r1dx*r2dx + d3*r1dx*r3dx - d1*(Power(r2dx,2) + Power(r3dx,2)))*Sin(Ang))/((Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sqrt((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))));
dAdr(4,1) = 0;
dAdr(5,1) = ((-(r2dx*(d1*r1dx + d3*r3dx)) + d2*(Power(r1dx,2) + Power(r3dx,2)))*Cos(Ang) + (-(d3*r1dx) + d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang))/((Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sqrt((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))));
dAdr(6,1) = ((-(d3*r1dx) + d1*r3dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (r2dx*(d1*r1dx + d3*r3dx) - d2*(Power(r1dx,2) + Power(r3dx,2)))*Sin(Ang))/((Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sqrt((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))));
dAdr(7,1) = 0;
dAdr(8,1) = ((d3*(Power(r1dx,2) + Power(r2dx,2)) - (d1*r1dx + d2*r2dx)*r3dx)*Cos(Ang) + (d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sin(Ang))/((Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sqrt((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))));
dAdr(9,1) = ((d2*r1dx - d1*r2dx)*Sqrt(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Cos(Ang) + (-(d3*(Power(r1dx,2) + Power(r2dx,2))) + (d1*r1dx + d2*r2dx)*r3dx)*Sin(Ang))/((Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))*Sqrt((Power(d3,2)*(Power(r1dx,2) + Power(r2dx,2)) - 2*d1*d3*r1dx*r3dx - 2*d2*r2dx*(d1*r1dx + d3*r3dx) + Power(d2,2)*(Power(r1dx,2) + Power(r3dx,2)) + Power(d1,2)*(Power(r2dx,2) + Power(r3dx,2)))/(Power(r1dx,2) + Power(r2dx,2) + Power(r3dx,2))));
}