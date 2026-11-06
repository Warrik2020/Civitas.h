#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class Cadence : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Cadence(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "Cadence") {}
    public:
        int Take(float& credit, int span, int interval) const { void* args[] = { &credit, &span, &interval }; return CallStaticValue<int>("Take", args, 3); }
    };
}
