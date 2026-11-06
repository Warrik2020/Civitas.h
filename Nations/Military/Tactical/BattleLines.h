#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleLines : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleLines(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleLines") {}
    public:
        int LineOf(int battalion) const { void* args[] = { &battalion }; return CallStaticValue<int>("LineOf", args, 1); }
        void* At(int line) const { void* args[] = { &line }; return CallStatic("At", args, 1); }
        void Build(void* bats, void* extra, int count, int side, void* axis) const { void* args[] = { bats, extra, &count, &side, axis }; CallStatic("Build", args, 5); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* stand() const { return ReadField<void*>("stand"); }
        void SetStand(void* value) const { WriteField<void*>("stand", value); }
        void* axis() const { return ReadField<void*>("axis"); }
        void SetAxis(void* value) const { WriteField<void*>("axis", value); }
        void* right() const { return ReadField<void*>("right"); }
        void SetRight(void* value) const { WriteField<void*>("right", value); }
        float lateralMin() const { return ReadField<float>("lateralMin"); }
        void SetLateralMin(float value) const { WriteField<float>("lateralMin", value); }
        float lateralMax() const { return ReadField<float>("lateralMax"); }
        void SetLateralMax(float value) const { WriteField<float>("lateralMax", value); }
        float morale() const { return ReadField<float>("morale"); }
        void SetMorale(float value) const { WriteField<float>("morale", value); }
        int members() const { return ReadField<int>("members"); }
        void SetMembers(int value) const { WriteField<int>("members", value); }
    };
}
