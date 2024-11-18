#pragma once

#include "esphome/components/button/button.h"
#include "../LD2412.h"

namespace esphome {
namespace LD2412 {

class QueryButton : public button::Button, public Parented<LD2412Component> {
 public:
  QueryButton() = default;

 protected:
  void press_action() override;
};

}  // namespace LD2412
}  // namespace esphome
