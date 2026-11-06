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
        int ProductionRoom(void* it, void* d, int exceptDesignId) const { void* args[] = { it, d, &exceptDesignId }; return CallStaticValue<int>("ProductionRoom", args, 3); }
        void* ProductionRefusal(void* it, void* d) const { void* args[] = { it, d }; return CallStatic("ProductionRefusal", args, 2); }
        void BeginTick(void* it) const { void* args[] = { it }; CallStatic("BeginTick", args, 1); }
        float LineScale(void* it, void* d) const { void* args[] = { it, d }; return CallStaticValue<float>("LineScale", args, 2); }
        void* FieldRefusal(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("FieldRefusal", args, 2); }
        bool FieldShort(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<bool>("FieldShort", args, 2); }
        bool NoHorses(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("NoHorses", args, 1); }
        void* NeedsText(void* d) const { void* args[] = { d }; return CallStatic("NeedsText", args, 1); }
    };
}
