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
        void Bind(void* mgr) const { void* args[] = { mgr }; CallStatic("Bind", args, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* Of(int nationId) const { void* args[] = { &nationId }; return CallStatic("Of", args, 1); }
        int TargetOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("TargetOf", args, 1); }
        int CountTargeting(int target) const { void* args[] = { &target }; return CallStaticValue<int>("CountTargeting", args, 1); }
        void AimedAt(int target, void* into) const { void* args[] = { &target, into }; CallStatic("AimedAt", args, 2); }
        void Forget(int nationId) const { void* args[] = { &nationId }; CallStatic("Forget", args, 1); }
        void OnWar(int a, int b) const { void* args[] = { &a, &b }; CallStatic("OnWar", args, 2); }
        bool Open(int nationId, int target, void* cause, int tick) const { void* args[] = { &nationId, &target, cause, &tick }; return CallStaticValue<bool>("Open", args, 4); }
        bool Gate(int nationId, int target, void* cause, int tick, void* it) const { void* args[] = { &nationId, &target, cause, &tick, it }; return CallStaticValue<bool>("Gate", args, 5); }
        bool Ready(void* p, void* it, int tick) const { void* args[] = { p, it, &tick }; return CallStaticValue<bool>("Ready", args, 3); }
        float Progress(void* p, void* it, int tick) const { void* args[] = { p, it, &tick }; return CallStaticValue<float>("Progress", args, 3); }
        void BeginThink(int nationId) const { void* args[] = { &nationId }; CallStatic("BeginThink", args, 1); }
        void EndThink(int nationId, int tick) const { void* args[] = { &nationId, &tick }; CallStatic("EndThink", args, 2); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float MassShare() const { return ReadStaticField<float>("MassShare"); }
        float PlannedShare() const { return ReadStaticField<float>("PlannedShare"); }
        int MissThinks() const { return ReadStaticField<int>("MissThinks"); }
        int GiveUpTicks() const { return ReadStaticField<int>("GiveUpTicks"); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        void* cause() const { return ReadField<void*>("cause"); }
        void SetCause(void* value) const { WriteField<void*>("cause", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
    };
}
