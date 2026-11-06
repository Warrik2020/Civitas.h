#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class WarPrep : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarPrep(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "WarPrep") {}
    public:
        void Bind(void* mgr) const { void* __callArgs[] = { mgr }; CallStatic("Bind", __callArgs, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* Of(int nationId) const { void* __callArgs[] = { &nationId }; return CallStatic("Of", __callArgs, 1); }
        int TargetOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("TargetOf", __callArgs, 1); }
        int CountTargeting(int target) const { void* __callArgs[] = { &target }; return CallStaticValue<int>("CountTargeting", __callArgs, 1); }
        void AimedAt(int target, void* into) const { void* __callArgs[] = { &target, into }; CallStatic("AimedAt", __callArgs, 2); }
        void Forget(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("Forget", __callArgs, 1); }
        void OnWar(int a, int b) const { void* __callArgs[] = { &a, &b }; CallStatic("OnWar", __callArgs, 2); }
        bool Open(int nationId, int target, void* cause, int tick) const { void* __callArgs[] = { &nationId, &target, cause, &tick }; return CallStaticValue<bool>("Open", __callArgs, 4); }
        bool Gate(int nationId, int target, void* cause, int tick, void* it) const { void* __callArgs[] = { &nationId, &target, cause, &tick, it }; return CallStaticValue<bool>("Gate", __callArgs, 5); }
        bool Ready(void* p, void* it, int tick) const { void* __callArgs[] = { p, it, &tick }; return CallStaticValue<bool>("Ready", __callArgs, 3); }
        float Progress(void* p, void* it, int tick) const { void* __callArgs[] = { p, it, &tick }; return CallStaticValue<float>("Progress", __callArgs, 3); }
        void BeginThink(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("BeginThink", __callArgs, 1); }
        void EndThink(int nationId, int tick) const { void* __callArgs[] = { &nationId, &tick }; CallStatic("EndThink", __callArgs, 2); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float MassShare() const { return ReadStaticField<float>("MassShare"); }
        float PlannedShare() const { return ReadStaticField<float>("PlannedShare"); }
        int MissThinks() const { return ReadStaticField<int>("MissThinks"); }
        int GiveUpTicks() const { return ReadStaticField<int>("GiveUpTicks"); }
    };
}
