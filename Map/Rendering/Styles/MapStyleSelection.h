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
        void Set(const char* id, bool persist = true) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* args[] = { managed_0, &persist }; CallStatic("Set", args, 2); }
        void Step(int dir) const { void* args[] = { &dir }; CallStatic("Step", args, 1); }
        void Cycle() const { CallStatic("Cycle", nullptr, 0); }
        void* DefaultId() const { return ReadStaticField<void*>("DefaultId"); }
    };
}
