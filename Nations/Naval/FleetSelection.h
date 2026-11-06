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
        bool Contains(int id) const { void* __callArgs[] = { &id }; return CallStaticValue<bool>("Contains", __callArgs, 1); }
        void Set(void* ids) const { void* __callArgs[] = { ids }; CallStatic("Set", __callArgs, 1); }
        void Add(int id) const { void* __callArgs[] = { &id }; CallStatic("Add", __callArgs, 1); }
        void Toggle(int id) const { void* __callArgs[] = { &id }; CallStatic("Toggle", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* Ids() const { return ReadStaticField<void*>("Ids"); }
    };
}
