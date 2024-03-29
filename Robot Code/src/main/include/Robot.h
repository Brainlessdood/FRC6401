// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include <string>
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/motorcontrol/Spark.h>
#include <rev/CANSparkMax.h>
#include <frc/Encoder.h>
#include <rev/CANEncoder.h>
#include <frc/Joystick.h>
//#include <ctre/phoenix6/CANcoder.hpp>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/filter/SlewRateLimiter.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
 
//#include <frc/XboxController.h>
// aaron waz aqui!
//limelight imports
#include "frc/smartdashboard/Smartdashboard.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableInstance.h"
#include "networktables/NetworkTableEntry.h"
#include "networktables/NetworkTableValue.h"
//#include "wpi/span.h"
#include "cameraserver/CameraServer.h"

#include <iostream>
#include <time.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;

  rev::CANSparkMax flspin{1, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax blspin{3, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax frspin{5, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax brspin{7, rev::CANSparkMax::MotorType::kBrushless};

  rev::CANSparkMax fldrive{2, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax bldrive{4, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax brdrive{6, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax frdrive{8, rev::CANSparkMax::MotorType::kBrushless};

  //rev::SparkMaxRelativeEncoder encoder;


  frc::Joystick leftJoystick{0};
	frc::Joystick rightJoystick{1};

  frc::Encoder encoder{0, 1};

};

//Hello! This is a test comment made from Dylan's computer to test github commits!
//It worked. :)