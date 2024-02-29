#include "rclcpp/rclcpp.hpp"

#include "mvp_drivers/pwm_driver.hpp"


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<PwmDriver> node = std::make_shared<PwmDriver>();

  rclcpp::spin(node);

  rclcpp::shutdown();
  return 0;
}
