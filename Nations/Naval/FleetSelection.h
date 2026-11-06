#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class FleetSelection : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FleetSelection(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "FleetSelection") {}
    public:
        bool Contains(int id) const { void* args[] = { &id }; return CallStaticValue<bool>("Contains", args, 1); }
        void Set(void* ids) const { void* args[] = { ids }; CallStatic("Set", args, 1); }
        void Add(int id) const { void* args[] = { &id }; CallStatic("Add", args, 1); }
        void Toggle(int id) const { void* args[] = { &id }; CallStatic("Toggle", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* Ids() const { return ReadStaticField<void*>("Ids"); }
    };
}
