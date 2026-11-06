#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class TimeSkipController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "TimeSkipController") {}
    public:
        void Open() const { CallStatic("Open", nullptr, 0); }
    };
}
