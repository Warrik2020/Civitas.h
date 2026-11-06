#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionGrouping : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionGrouping(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionGrouping") {}
    public:
        bool CanGroup(void* a, void* b) const { void* args[] = { a, b }; return CallStaticValue<bool>("CanGroup", args, 2); }
        bool Group(void* a, void* b, void* cfg) const { void* args[] = { a, b, cfg }; return CallStaticValue<bool>("Group", args, 3); }
        void Ungroup(void* d) const { void* args[] = { d }; CallStatic("Ungroup", args, 1); }
    };
}
