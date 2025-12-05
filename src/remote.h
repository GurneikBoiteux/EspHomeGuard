#pragma once

enum class RemoteCommandType {
    NONE,
    ARM,
    DISARM
};

void remote_init();

RemoteCommandType remote_check_command();