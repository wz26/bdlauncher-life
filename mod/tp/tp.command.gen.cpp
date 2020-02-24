// Generated by scripts/generate_command_definition.py

#include "tp.command.h"

template <> class BDL::CustomCommand::CommandParameterProxy<Cancel> {
  Cancel value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Cancel>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Cancel";

  operator Cancel() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Ac> {
  Ac value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Ac>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Ac";

  operator Ac() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<De> {
  De value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, De>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "De";

  operator De() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Gui> {
  Gui value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Gui>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Gui";

  operator Gui() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<CmdF> {
  CmdF value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, CmdF>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "CmdF";

  operator CmdF() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<CmdT> {
  CmdT value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, CmdT>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "CmdT";

  operator CmdT() const noexcept { return value; }
};

struct TPACommand_0 : Command {
  CommandParameterProxy<Cancel> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    TPACommand context{origin, output};
    context.CANCEL(cmd);
  }
};

struct TPACommand_1 : Command {
  CommandParameterProxy<Ac> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    TPACommand context{origin, output};
    context.AC(cmd);
  }
};

struct TPACommand_2 : Command {
  CommandParameterProxy<De> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    TPACommand context{origin, output};
    context.DE(cmd);
  }
};

struct TPACommand_3 : Command {
  CommandParameterProxy<Gui> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    TPACommand context{origin, output};
    context.GUI(cmd);
  }
};

struct TPACommand_4 : Command {
  CommandParameterProxy<CmdF> cmd;
  CommandParameterProxy<std::string> target;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    TPACommand context{origin, output};
    context.CMDF(cmd, target);
  }
};

struct TPACommand_5 : Command {
  CommandParameterProxy<CmdT> cmd;
  CommandParameterProxy<std::string> target;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    TPACommand context{origin, output};
    context.CMDT(cmd, target);
  }
};

void register_commands() {
  auto &instance = CustomCommandRegistry::getInstance();
  {
    auto &item = instance.registerEnum<Cancel>();
    item.addValue("cancel", Cancel::cancel);
  }
  {
    auto &item = instance.registerEnum<Ac>();
    item.addValue("ac", Ac::ac);
  }
  {
    auto &item = instance.registerEnum<De>();
    item.addValue("de", De::de);
  }
  {
    auto &item = instance.registerEnum<Gui>();
    item.addValue("gui", Gui::gui);
  }
  {
    auto &item = instance.registerEnum<CmdF>();
    item.addValue("f", CmdF::f);
  }
  {
    auto &item = instance.registerEnum<CmdT>();
    item.addValue("t", CmdT::t);
  }
  {
    auto &cmd = instance.registerCommand<TPACommand>();
    {
      auto &ovl = cmd.registerOverload<TPACommand_0>();
      ovl.addParameter<Cancel>("cmd", false, offsetof(TPACommand_0, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<TPACommand_1>();
      ovl.addParameter<Ac>("cmd", false, offsetof(TPACommand_1, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<TPACommand_2>();
      ovl.addParameter<De>("cmd", false, offsetof(TPACommand_2, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<TPACommand_3>();
      ovl.addParameter<Gui>("cmd", false, offsetof(TPACommand_3, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<TPACommand_4>();
      ovl.addParameter<CmdF>("cmd", false, offsetof(TPACommand_4, cmd));
      ovl.addParameter<std::string>("target", false, offsetof(TPACommand_4, target));
    }
    {
      auto &ovl = cmd.registerOverload<TPACommand_5>();
      ovl.addParameter<CmdT>("cmd", false, offsetof(TPACommand_5, cmd));
      ovl.addParameter<std::string>("target", false, offsetof(TPACommand_5, target));
    }
  }
}
