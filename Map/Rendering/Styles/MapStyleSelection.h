#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class MapStyleSelection : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapStyleSelection(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "MapStyleSelection") {}
    public:
        void Set(const char* id, bool persist = true) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0, &persist }; CallStatic("Set", __callArgs, 2); }
        void Step(int dir) const { void* __callArgs[] = { &dir }; CallStatic("Step", __callArgs, 1); }
        void Cycle() const { CallStatic("Cycle", nullptr, 0); }
        void* DefaultId() const { return ReadStaticField<void*>("DefaultId"); }
    };
}
