#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceGate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceGate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceGate") {}
    public:
        int ProductionRoom(void* it, void* d, int exceptDesignId) const { void* __callArgs[] = { it, d, &exceptDesignId }; return CallStaticValue<int>("ProductionRoom", __callArgs, 3); }
        void* ProductionRefusal(void* it, void* d) const { void* __callArgs[] = { it, d }; return CallStatic("ProductionRefusal", __callArgs, 2); }
        void BeginTick(void* it) const { void* __callArgs[] = { it }; CallStatic("BeginTick", __callArgs, 1); }
        float LineScale(void* it, void* d) const { void* __callArgs[] = { it, d }; return CallStaticValue<float>("LineScale", __callArgs, 2); }
        void* FieldRefusal(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("FieldRefusal", __callArgs, 2); }
        bool FieldShort(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<bool>("FieldShort", __callArgs, 2); }
        bool NoHorses(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("NoHorses", __callArgs, 1); }
        void* NeedsText(void* d) const { void* __callArgs[] = { d }; return CallStatic("NeedsText", __callArgs, 1); }
    };
}
