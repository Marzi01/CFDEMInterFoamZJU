//#**************************************************************
//#
//# filename:             options_class_auto.h 
//#
//# author:               Gerstmayr, Reischl, Saxinger
//#
//# generated:	
//# description: 
//# remarks:		
//#
//# Copyright (c) 2003-2013 Johannes Gerstmayr, Linz Center of Mechatronics GmbH, Austrian
//# Center of Competence in Mechatronics GmbH, Institute of Technical Mechanics at the 
//# Johannes Kepler Universitaet Linz, Austria. All rights reserved.
//#
//# This file is part of HotInt.
//# HotInt is free software: you can redistribute it and/or modify it under the terms of 
//# the HOTINT license. See folder "licenses" for more details.
//#
//# bug reports are welcome!!!
//# WWW:		www.hotint.org
//# email:	bug_reports@hotint.org or support@hotint.org
//#***************************************************************************************

//File automatically generated by Octave/Matlab script "documentation/autogeneration/generate_options_fn"!
//Do not manually change this file, because it will be overwritten
//Initialisation of the IOptions/DOptions/TOptions can be made in the tabular file "documentation/autogeneration/options_forautogen.txt"!
#ifndef OPTIONS_CLASS_AUTO__H
#define OPTIONS_CLASS_AUTO__H

#include "mbs_interface.h"

//provide semantic access to [I|D|T]Options:
class HOTINTOptions
{
public:
	//constructor
	HOTINTOptions(MBSOptionsInterface* pOI)
	{
		HOTINTOptions::pOI = pOI;
		_loggingoptions = new LoggingOptionsClass(pOI);
		_generaloptions = new GeneralOptionsClass(pOI);
		_viewingoptions = new ViewingOptionsClass(pOI);
		_postprocoptions = new PostProcOptionsClass(pOI);
		_graphicsoptions = new GraphicsOptionsClass(pOI);
		_plottooloptions = new PlotToolOptionsClass(pOI);
		_preprocoptions = new PreProcOptionsClass(pOI);
	}

	//copy constructor
	HOTINTOptions(const HOTINTOptions& rhs)
	{
		pOI = rhs.pOI;
		_loggingoptions = rhs._loggingoptions;
		_generaloptions = rhs._generaloptions;
		_viewingoptions = rhs._viewingoptions;
		_postprocoptions = rhs._postprocoptions;
		_graphicsoptions = rhs._graphicsoptions;
		_plottooloptions = rhs._plottooloptions;
		_preprocoptions = rhs._preprocoptions;
	}

	//subclass definitions
	class LoggingOptionsClass
	{
	public:
		LoggingOptionsClass(MBSOptionsInterface* pOI) { LoggingOptionsClass::pOI = pOI; }

		int& SolverGeneralInformation() { return pOI->GetIOption(180); }
		int& SolverNewtonIterationJacobiCondition() { return pOI->GetIOption(187); }
		int& SolverNewtonIterationJacobiMatrix() { return pOI->GetIOption(181); }
		int& SolverNewtonIterationResidualVector() { return pOI->GetIOption(182); }
		int& SolverNewtonIterationSolutionVector() { return pOI->GetIOption(183); }
		int& SolverPostNewtonIterationDataVector() { return pOI->GetIOption(184); }
		int& SolverStepSolutionVectorIncrement() { return pOI->GetIOption(185); }
		int& SolverStepSolutionVector() { return pOI->GetIOption(186); }
		int& EDCParserGeneralInformation() { return pOI->GetIOption(190); }
		int& OutputLevel() { return pOI->GetIOption(199); }
		int& OutputPrecisionDouble() { return pOI->GetIOption(198); }
		int& OutputPrecisionVector() { return pOI->GetIOption(197); }
		int& OutputPrecisionMatrix() { return pOI->GetIOption(196); }
		int& MaxErrorMessages() { return pOI->GetIOption(195); }
		int& MaxWarningMessages() { return pOI->GetIOption(194); }
		double& ComputationOutputEveryXSec() { return pOI->GetDOption(199); }
		int& WriteMassAndStiffnessMatrix() { return pOI->GetIOption(193); }
		const char* DefaultLogFilename() { return pOI->GetTOption(199); }
		double& CriticalLogFileSize() { return pOI->GetDOption(198); }
		int& FileOutputLevel() { return pOI->GetIOption(192); }
	protected:
		MBSOptionsInterface* pOI;
	};

	class GeneralOptionsClass
	{
	public:
		GeneralOptionsClass(MBSOptionsInterface* pOI) { GeneralOptionsClass::pOI = pOI; }

		int& ApplicationCloseApplicationWhenFinished() { return pOI->GetIOption(220); }
		int& ApplicationShowHotintWindow() { return pOI->GetIOption(221); }
		int& ApplicationStartComputationAutomatically() { return pOI->GetIOption(222); }
		int& ApplicationRemoveExperimentalMenuItems() { return pOI->GetIOption(223); }
		int& ApplicationReloadLastModel() { return pOI->GetIOption(224); }
		int& ApplicationActivateAutosave() { return pOI->GetIOption(225); }
		const char* PathsApplicationPath() { return pOI->GetTOption(101); }
		const char* PathsRecordFramesPath() { return pOI->GetTOption(102); }
		const char* PathsHotintInputDataPath() { return pOI->GetTOption(103); }
		const char* PathsSingleImagePath() { return pOI->GetTOption(120); }
		const char* PathsVideoImagePath() { return pOI->GetTOption(122); }
		const char* PathsPlottoolImagePath() { return pOI->GetTOption(124); }
		const char* ModelFileHotintInputDataFilename() { return pOI->GetTOption(110); }
		const char* ModelFileInternalModelFunctionName() { return pOI->GetTOption(112); }
		const char* ModelFileRecentFile1() { return pOI->GetTOption(113); }
		const char* ModelFileRecentFile2() { return pOI->GetTOption(114); }
		const char* ModelFileRecentFile3() { return pOI->GetTOption(115); }
		const char* ModelFileRecentFile4() { return pOI->GetTOption(116); }
		const char* ModelFileRecentFile5() { return pOI->GetTOption(117); }
		int& ModelFileAcceptTxtFileAsModelFile() { return pOI->GetIOption(170); }
		int& MeasurementUseDegrees() { return pOI->GetIOption(120); }
		int& MeasurementAngleMode() { return pOI->GetIOption(140); }
		int& MeasurementUnitsOfLegend() { return pOI->GetIOption(143); }
		int& OutputWindowMaxTextLength() { return pOI->GetIOption(152); }
	protected:
		MBSOptionsInterface* pOI;
	};

	class ViewingOptionsClass
	{
	public:
		ViewingOptionsClass(MBSOptionsInterface* pOI) { ViewingOptionsClass::pOI = pOI; }

		int& AnimationAnimateFromBeginning() { return pOI->GetIOption(115); }
		int& AnimationAnimateEveryNFrame() { return pOI->GetIOption(109); }
		int& AnimationAnimateDeformation() { return pOI->GetIOption(150); }
		int& AnimationAnimateDeformationOnce() { return pOI->GetIOption(153); }
		int& AnimationRecordSingleFramesRecord() { return pOI->GetIOption(163); }
		int& AnimationRecordSingleFramesProcessImage() { return pOI->GetIOption(164); }
		int& AnimationRecordSingleFramesShowFrameNumbers() { return pOI->GetIOption(165); }
		int& AnimationRecordSingleFramesRecordEveryXFrame() { return pOI->GetIOption(166); }
		const char* AnimationRecordSingleFramesSingleFileName() { return pOI->GetTOption(121); }
		const char* AnimationRecordSingleFramesVideoFileName() { return pOI->GetTOption(123); }
		int& AnimationRecordSingleFramesDefaultImageFormat() { return pOI->GetIOption(167); }
		int& AnimationRecordSingleFramesIncludeOutputWindow() { return pOI->GetIOption(168); }
		int& MiscRedrawFrequency() { return pOI->GetIOption(104); }
		int& MiscDrawBackgroundTransparent() { return pOI->GetIOption(131); }
		double& MiscGeomElementLineThickness() { return pOI->GetDOption(119); }
		double& MiscGlobalLineThickness() { return pOI->GetDOption(114); }
		double& MiscGlobalPointSize() { return pOI->GetDOption(117); }
		int& MiscShow3DTextInFront() { return pOI->GetIOption(122); }
		int& OriginShow() { return pOI->GetIOption(106); }
		double& OriginSizeOfOrigin() { return pOI->GetDOption(103); }
		int& GridShow() { return pOI->GetIOption(126); }
		double& GridPosX() { return pOI->GetDOption(107); }
		double& GridPosY() { return pOI->GetDOption(108); }
		double& GridPosZ() { return pOI->GetDOption(109); }
		double& GridSize1() { return pOI->GetDOption(112); }
		double& GridSize2() { return pOI->GetDOption(113); }
		double& GridSize3() { return pOI->GetDOption(142); }
		double& GridStep1() { return pOI->GetDOption(110); }
		double& GridStep2() { return pOI->GetDOption(111); }
		double& GridStep3() { return pOI->GetDOption(143); }
		double& GridColorsTransparencyFactor() { return pOI->GetDOption(144); }
		double& GridColorsPlane1ColR() { return pOI->GetDOption(133); }
		double& GridColorsPlane1ColG() { return pOI->GetDOption(134); }
		double& GridColorsPlane1ColB() { return pOI->GetDOption(135); }
		double& GridColorsPlane2ColR() { return pOI->GetDOption(136); }
		double& GridColorsPlane2ColG() { return pOI->GetDOption(137); }
		double& GridColorsPlane2ColB() { return pOI->GetDOption(138); }
		double& GridColorsPlane3ColR() { return pOI->GetDOption(139); }
		double& GridColorsPlane3ColG() { return pOI->GetDOption(140); }
		double& GridColorsPlane3ColB() { return pOI->GetDOption(141); }
		int& CuttingPlane1Activate() { return pOI->GetIOption(149); }
		double& CuttingPlane1NormalX() { return pOI->GetDOption(125); }
		double& CuttingPlane1NormalY() { return pOI->GetDOption(126); }
		double& CuttingPlane1NormalZ() { return pOI->GetDOption(127); }
		double& CuttingPlane1Distance() { return pOI->GetDOption(128); }
		int& CuttingPlane2Activate() { return pOI->GetIOption(156); }
		double& CuttingPlane2NormalX() { return pOI->GetDOption(129); }
		double& CuttingPlane2NormalY() { return pOI->GetDOption(130); }
		double& CuttingPlane2NormalZ() { return pOI->GetDOption(131); }
		double& CuttingPlane2Distance() { return pOI->GetDOption(132); }
		int& CuttingPlaneCutBodies() { return pOI->GetIOption(158); }
		int& CuttingPlaneCutBodiesAltshapes() { return pOI->GetIOption(159); }
		int& CuttingPlaneCutGround() { return pOI->GetIOption(161); }
		int& CuttingPlaneCutWholeSceneByOpenGl() { return pOI->GetIOption(157); }
		int& CuttingPlaneNosurfaceupdate() { return pOI->GetIOption(119); }
		int& StandardViewAngleRotAxis1() { return pOI->GetIOption(200); }
		int& StandardViewAngleRotAxis2() { return pOI->GetIOption(201); }
		int& StandardViewAngleRotAxis3() { return pOI->GetIOption(202); }
		int& StandardViewAngleRotAxis21() { return pOI->GetIOption(203); }
		int& StandardViewAngleRotAxis22() { return pOI->GetIOption(204); }
		int& StandardViewAngleRotAxis23() { return pOI->GetIOption(205); }
		double& StandardViewAngle1() { return pOI->GetDOption(200); }
		double& StandardViewAngle2() { return pOI->GetDOption(201); }
		double& StandardViewAngle3() { return pOI->GetDOption(202); }
		double& StandardViewAngle21() { return pOI->GetDOption(203); }
		double& StandardViewAngle22() { return pOI->GetDOption(204); }
		double& StandardViewAngle23() { return pOI->GetDOption(205); }
	protected:
		MBSOptionsInterface* pOI;
	};

	class PostProcOptionsClass
	{
	public:
		PostProcOptionsClass(MBSOptionsInterface* pOI) { PostProcOptionsClass::pOI = pOI; }

		int& BodiesRigidDrawSmooth() { return pOI->GetIOption(132); }
		int& BodiesRigidShowOutline() { return pOI->GetIOption(133); }
		int& BodiesRigidShowFaces() { return pOI->GetIOption(134); }
		double& BodiesRigidLineThickness() { return pOI->GetDOption(115); }
		int& BodiesRigidDrawCenterOfGravity() { return pOI->GetIOption(251); }
		int& BodiesRigidDrawResolution() { return pOI->GetIOption(258); }
		double& BodiesRigidCOGSizefactor() { return pOI->GetDOption(259); }
		int& BodiesShowElementNumbers() { return pOI->GetIOption(123); }
		int& BodiesShowLocalFrame() { return pOI->GetIOption(125); }
		int& BodiesTransparent() { return pOI->GetIOption(128); }
		double& BodiesLocalFrameSize() { return pOI->GetDOption(104); }
		double& BodiesDeformationScaleFactor() { return pOI->GetDOption(105); }
		int& BodiesScaleRigidBodyDisplacements() { return pOI->GetIOption(151); }
		int& BodiesShowVelocityVector() { return pOI->GetIOption(154); }
		int& BodiesVelocityVectorJustForParticles() { return pOI->GetIOption(162); }
		int& BodiesVelocityVectorScalingMode() { return pOI->GetIOption(116); }
		double& BodiesVelocityVectorScalingA() { return pOI->GetDOption(154); }
		double& BodiesVelocityVectorScalingB() { return pOI->GetDOption(153); }
		double& BodiesVelocityVectorScalingThickness() { return pOI->GetDOption(152); }
		double& BodiesParticlesDisplacementScaleFactor() { return pOI->GetDOption(156); }
		double& BodiesParticlesDrawSizeFactor() { return pOI->GetDOption(155); }
		int& BodiesParticlesDrawEveryNth() { return pOI->GetIOption(155); }
		int& FiniteElementsContourActivate() { return pOI->GetIOption(111); }
		int& FiniteElementsContourMaxStressActive() { return pOI->GetIOption(100); }
		double& FiniteElementsContourMaxStress() { return pOI->GetDOption(100); }
		int& FiniteElementsContourMinStressActive() { return pOI->GetIOption(101); }
		double& FiniteElementsContourMinStress() { return pOI->GetDOption(101); }
		const char* FiniteElementsContourPostProcessingVariableName() { return pOI->GetTOption(107); }
		int& FiniteElementsContourVariableRangeAutoUpdate() { return pOI->GetIOption(102); }
		int& FiniteElementsContourColorTiling() { return pOI->GetIOption(103); }
		int& FiniteElementsContourLabelPrecision() { return pOI->GetIOption(160); }
		int& FiniteElementsContourPlotInterpolated() { return pOI->GetIOption(118); }
		int& FiniteElementsContourGreyMode() { return pOI->GetIOption(105); }
		int& FiniteElementsContourInvertColors() { return pOI->GetIOption(107); }
		int& FiniteElementsContourNonlinearColorLegend() { return pOI->GetIOption(108); }
		int& FiniteElementsContourHideLegend() { return pOI->GetIOption(141); }
		int& FiniteElementsContourAxisTiling() { return pOI->GetIOption(136); }
		int& FiniteElementsContourResolutionAxis() { return pOI->GetIOption(137); }
		int& FiniteElementsContourResolutionCrossSection() { return pOI->GetIOption(138); }
		int& FiniteElementsContourResolutionSolidElements() { return pOI->GetIOption(139); }
		int& FiniteElementsNodesShow() { return pOI->GetIOption(145); }
		int& FiniteElementsNodesShowNodeNumbers() { return pOI->GetIOption(148); }
		int& FiniteElementsNodesNodeResolution() { return pOI->GetIOption(147); }
		double& FiniteElementsNodesNodeSize() { return pOI->GetDOption(124); }
		int& FiniteElementsMeshShow() { return pOI->GetIOption(110); }
		int& FiniteElementsMeshDrawFlatElements() { return pOI->GetIOption(117); }
		int& FiniteElementsMeshDrawOnlySurfaceElements() { return pOI->GetIOption(146); }
		double& FiniteElementsMeshElementLineThickness() { return pOI->GetDOption(102); }
		double& FiniteElementsMeshShrinkingFactor() { return pOI->GetDOption(106); }
		int& ConnectorsShowConstraints() { return pOI->GetIOption(121); }
		int& ConnectorsShowControlElements() { return pOI->GetIOption(144); }
		int& ConnectorsShowConstraintNumbers() { return pOI->GetIOption(124); }
		int& ConnectorsShowFaces() { return pOI->GetIOption(114); }
		int& ConnectorsTransparent() { return pOI->GetIOption(129); }
		int& ConnectorsDrawOutline() { return pOI->GetIOption(135); }
		double& ConnectorsLineThickness() { return pOI->GetDOption(116); }
		int& ConnectorsContactShowContactAsCircle() { return pOI->GetIOption(113); }
		int& ConnectorsContactShowContactPoints() { return pOI->GetIOption(112); }
		double& ConnectorsGlobalDrawScalarSize() { return pOI->GetDOption(171); }
		double& ConnectorsGlobalDrawAxisLength() { return pOI->GetDOption(172); }
		double& ConnectorsGlobalDrawResolution() { return pOI->GetDOption(173); }
		int& LoadsShowLoads() { return pOI->GetIOption(142); }
		double& LoadsArrowSize() { return pOI->GetDOption(120); }
		double& LoadsColorRed() { return pOI->GetDOption(121); }
		double& LoadsColorGreen() { return pOI->GetDOption(122); }
		double& LoadsColorBlue() { return pOI->GetDOption(123); }
		int& SensorsShowSensors() { return pOI->GetIOption(127); }
		int& SensorsTransparent() { return pOI->GetIOption(130); }
		double& SensorsSensorOriginSize() { return pOI->GetDOption(118); }
	protected:
		MBSOptionsInterface* pOI;
	};

	class GraphicsOptionsClass
	{
	public:
		GraphicsOptionsClass(MBSOptionsInterface* pOI) { GraphicsOptionsClass::pOI = pOI; }

		int& OpenGLEnableLighting() { return pOI->GetIOption(206); }
		int& OpenGLSmoothModel() { return pOI->GetIOption(207); }
		int& OpenGLImmediateApplyDialog() { return pOI->GetIOption(212); }
		int& OpenGLGlobalCulling() { return pOI->GetIOption(213); }
		double& OpenGLGlobalTransparency() { return pOI->GetDOption(206); }
		double& OpenGLMaterialShininess() { return pOI->GetDOption(219); }
		double& OpenGLMaterialColorIntensity() { return pOI->GetDOption(220); }
		int& OpenGLLight1Enable() { return pOI->GetIOption(208); }
		int& OpenGLLight1UseLightPosition() { return pOI->GetIOption(210); }
		double& OpenGLLight1Ambient() { return pOI->GetDOption(207); }
		double& OpenGLLight1Diffuse() { return pOI->GetDOption(208); }
		double& OpenGLLight1Specular() { return pOI->GetDOption(209); }
		double& OpenGLLight1PosX() { return pOI->GetDOption(213); }
		double& OpenGLLight1PosY() { return pOI->GetDOption(214); }
		double& OpenGLLight1PosZ() { return pOI->GetDOption(215); }
		int& OpenGLLight2Enable() { return pOI->GetIOption(209); }
		int& OpenGLLight2UseLightPosition() { return pOI->GetIOption(211); }
		double& OpenGLLight2Ambient() { return pOI->GetDOption(210); }
		double& OpenGLLight2Diffuse() { return pOI->GetDOption(211); }
		double& OpenGLLight2Specular() { return pOI->GetDOption(212); }
		double& OpenGLLight2PosX() { return pOI->GetDOption(216); }
		double& OpenGLLight2PosY() { return pOI->GetDOption(217); }
		double& OpenGLLight2PosZ() { return pOI->GetDOption(218); }
	protected:
		MBSOptionsInterface* pOI;
	};

	class PlotToolOptionsClass
	{
	public:
		PlotToolOptionsClass(MBSOptionsInterface* pOI) { PlotToolOptionsClass::pOI = pOI; }

		int& Activate() { return pOI->GetIOption(254); }
		int& AutoRedraw() { return pOI->GetIOption(255); }
		double& AutoRedrawInterval() { return pOI->GetDOption(255); }
		int& AutoRescale() { return pOI->GetIOption(257); }
		double& TitleSizeFactor() { return pOI->GetDOption(256); }
		double& TicksSizeFactor() { return pOI->GetDOption(257); }
		int& LineThicknessBorder() { return pOI->GetIOption(256); }
		double& LineThicknessFactor() { return pOI->GetDOption(258); }
		int& StatusBarInfo() { return pOI->GetIOption(259); }
		int& DataPointsFlagDrawEveryNth() { return pOI->GetIOption(290); }
		int& DataPointsDrawEveryNth() { return pOI->GetIOption(291); }
		int& DataPointsFlagMarkEveryNth() { return pOI->GetIOption(292); }
		int& DataPointsMarkEveryNth() { return pOI->GetIOption(293); }
		int& DataPointsVerticalMarker() { return pOI->GetIOption(294); }
		int& DataPointsDrawOnlyToTime() { return pOI->GetIOption(295); }
		int& ViewInitialSizeHorizontal() { return pOI->GetIOption(260); }
		int& ViewInitialSizeVertical() { return pOI->GetIOption(261); }
		int& ViewPlotHorizontal() { return pOI->GetIOption(262); }
		int& ViewPlotVertical() { return pOI->GetIOption(263); }
		double& ViewDistanceLeft() { return pOI->GetDOption(260); }
		double& ViewDistanceTop() { return pOI->GetDOption(261); }
		double& ViewDistanceBottom() { return pOI->GetDOption(262); }
		double& ViewDistanceRight() { return pOI->GetDOption(263); }
		int& WatchesInitialSizeHorizontal() { return pOI->GetIOption(278); }
		int& WatchesInitialSizeVertical() { return pOI->GetIOption(279); }
		int& AxisDrawAtOrigin() { return pOI->GetIOption(265); }
		int& AxisLabelMajor() { return pOI->GetIOption(266); }
		int& AxisLabelMinor() { return pOI->GetIOption(267); }
		double& AxisOverdraw() { return pOI->GetDOption(265); }
		double& AxisTicksize() { return pOI->GetDOption(266); }
		int& AxisMinorTicksX() { return pOI->GetIOption(268); }
		int& AxisMinorTicksY() { return pOI->GetIOption(269); }
		int& AxisDigitsXLabels() { return pOI->GetIOption(276); }
		int& AxisDigitsYLabels() { return pOI->GetIOption(277); }
		int& GridLinetypeMajorX() { return pOI->GetIOption(270); }
		int& GridLinetypeMinorX() { return pOI->GetIOption(271); }
		int& GridLinetypeMajorY() { return pOI->GetIOption(272); }
		int& GridLinetypeMinorY() { return pOI->GetIOption(273); }
		int& LegendShow() { return pOI->GetIOption(275); }
		double& LegendLeft() { return pOI->GetDOption(275); }
		double& LegendRight() { return pOI->GetDOption(276); }
		double& LegendTop() { return pOI->GetDOption(277); }
		double& LegendBottom() { return pOI->GetDOption(278); }
		const char* SavePictureFilename() { return pOI->GetTOption(125); }
		int& SavePictureSizeHorizontal() { return pOI->GetIOption(280); }
		int& SavePictureSizeVertical() { return pOI->GetIOption(281); }
		int& SavePictureJpgQuality() { return pOI->GetIOption(282); }
		int& SavePictureStoreJpg() { return pOI->GetIOption(285); }
		int& SavePictureStorePng() { return pOI->GetIOption(286); }
		int& SavePictureStoreBmp() { return pOI->GetIOption(287); }
		int& SavePictureStoreEmf() { return pOI->GetIOption(288); }
	protected:
		MBSOptionsInterface* pOI;
	};

	class PreProcOptionsClass
	{
	public:
		PreProcOptionsClass(MBSOptionsInterface* pOI) { PreProcOptionsClass::pOI = pOI; }

		double& SimulinkModelFormatParserApproxPeriodCont2disc() { return pOI->GetDOption(230); }
		double& SimulinkModelFormatParserDefaultValuesStaticDynamicFricionZeroZone() { return pOI->GetDOption(231); }
	protected:
		MBSOptionsInterface* pOI;
	};

	//subclass access
	LoggingOptionsClass* LoggingOptions() { return _loggingoptions; }
	GeneralOptionsClass* GeneralOptions() { return _generaloptions; }
	ViewingOptionsClass* ViewingOptions() { return _viewingoptions; }
	PostProcOptionsClass* PostProcOptions() { return _postprocoptions; }
	GraphicsOptionsClass* GraphicsOptions() { return _graphicsoptions; }
	PlotToolOptionsClass* PlotToolOptions() { return _plottooloptions; }
	PreProcOptionsClass* PreProcOptions() { return _preprocoptions; }

	//members
protected:
	MBSOptionsInterface* pOI;
	LoggingOptionsClass* _loggingoptions;
	GeneralOptionsClass* _generaloptions;
	ViewingOptionsClass* _viewingoptions;
	PostProcOptionsClass* _postprocoptions;
	GraphicsOptionsClass* _graphicsoptions;
	PlotToolOptionsClass* _plottooloptions;
	PreProcOptionsClass* _preprocoptions;
};
#endif

