#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/modbus/modbus.h"

namespace esphome {
namespace growatt {

class Growatt : public PollingComponent, public modbus::ModbusDevice {
 public:
  void set_input_power_high_sensor(sensor::Sensor *input_power_high_sensor) { input_power_high_sensor_ = input_power_high_sensor; }
  void set_input_power_low_sensor(sensor::Sensor *input_power_low_sensor) { input_power_low_sensor_ = input_power_low_sensor; }
  void set_pv1_voltage_sensor(sensor::Sensor *pv1_voltage_sensor) { pv1_voltage_sensor_ = pv1_voltage_sensor; }
  void set_pv1_current_sensor(sensor::Sensor *pv1_current_sensor) { pv1_current_sensor_ = pv1_current_sensor; }
  void set_pv1_power_high_sensor(sensor::Sensor *pv1_power_high_sensor) { pv1_power_high_sensor_ = pv1_power_high_sensor; }
  void set_pv1_power_low_sensor(sensor::Sensor *pv1_power_low_sensor) { pv1_power_low_sensor_ = pv1_power_low_sensor; }
  void set_pv2_voltage_sensor(sensor::Sensor *pv2_voltage_sensor) { pv2_voltage_sensor_ = pv2_voltage_sensor; }
  void set_pv2_current_sensor(sensor::Sensor *pv2_current_sensor) { pv2_current_sensor_ = pv2_current_sensor; }
  void set_pv2_power_high_sensor(sensor::Sensor *pv2_power_high_sensor) { pv2_power_high_sensor_ = pv2_power_high_sensor; }
  void set_pv2_power_low_sensor(sensor::Sensor *pv2_power_low_sensor) { pv2_power_low_sensor_ = pv2_power_low_sensor; }
  void set_output_power_high_sensor(sensor::Sensor *output_power_high_sensor) { output_power_high_sensor_ = output_power_high_sensor; }
  void set_output_power_low_sensor(sensor::Sensor *output_power_low_sensor) { output_power_low_sensor_ = output_power_low_sensor; }
  void set_grid_frequency_sensor(sensor::Sensor *grid_frequency_sensor) { grid_frequency_sensor_ = grid_frequency_sensor; }
  void set_ac_voltage_sensor(sensor::Sensor *ac_voltage_sensor) { ac_voltage_sensor_ = ac_voltage_sensor; }
  void set_ac_current_sensor(sensor::Sensor *ac_current_sensor) { ac_current_sensor_ = ac_current_sensor; }
  void set_ac_power_high_sensor(sensor::Sensor *ac_power_high_sensor) { ac_power_high_sensor_ = ac_power_high_sensor; }
  void set_ac_power_low_sensor(sensor::Sensor *ac_power_low_sensor) { ac_power_low_sensor_ = ac_power_low_sensor; }
  void set_temperature_sensor(sensor::Sensor *temperature_sensor) { temperature_sensor_ = temperature_sensor; }

  void update() override;

  void on_modbus_data(const std::vector<uint8_t> &data) override;

  void dump_config() override;

 protected:
  sensor::Sensor *input_power_high_sensor_;
  sensor::Sensor *input_power_low_sensor_;
  sensor::Sensor *pv1_voltage_sensor_;
  sensor::Sensor *pv1_current_sensor_;
  sensor::Sensor *pv1_power_high_sensor_;
  sensor::Sensor *pv1_power_low_sensor_;
  sensor::Sensor *pv2_voltage_sensor_;
  sensor::Sensor *pv2_current_sensor_;
  sensor::Sensor *pv2_power_high_sensor_;
  sensor::Sensor *pv2_power_low_sensor_;
  sensor::Sensor *output_power_high_sensor_;
  sensor::Sensor *output_power_low_sensor_;
  sensor::Sensor *grid_frequency_sensor_;
  sensor::Sensor *ac_voltage_sensor_;
  sensor::Sensor *ac_current_sensor_;
  sensor::Sensor *ac_power_high_sensor_;
  sensor::Sensor *ac_power_low_sensor_;
  sensor::Sensor *temperature_sensor_;
};

}  // namespace growatt
}  // namespace esphome
