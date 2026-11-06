#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalCtx : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalCtx(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalCtx") {}
    public:
        int nation() const { return ReadField<int>("nation"); }
        void SetNation(int value) const { WriteField<int>("nation", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        float ticksPerYear() const { return ReadField<float>("ticksPerYear"); }
        void SetTicksPerYear(float value) const { WriteField<float>("ticksPerYear", value); }
        int statesTotal() const { return ReadField<int>("statesTotal"); }
        void SetStatesTotal(int value) const { WriteField<int>("statesTotal", value); }
        int statesRuled() const { return ReadField<int>("statesRuled"); }
        void SetStatesRuled(int value) const { WriteField<int>("statesRuled", value); }
        bool targetAlive() const { return ReadField<bool>("targetAlive"); }
        void SetTargetAlive(bool value) const { WriteField<bool>("targetAlive", value); }
        bool capitalHeld() const { return ReadField<bool>("capitalHeld"); }
        void SetCapitalHeld(bool value) const { WriteField<bool>("capitalHeld", value); }
        bool targetJoined() const { return ReadField<bool>("targetJoined"); }
        void SetTargetJoined(bool value) const { WriteField<bool>("targetJoined", value); }
        int targetTiles() const { return ReadField<int>("targetTiles"); }
        void SetTargetTiles(int value) const { WriteField<int>("targetTiles", value); }
        float stability() const { return ReadField<float>("stability"); }
        void SetStability(float value) const { WriteField<float>("stability", value); }
        int ownedStates() const { return ReadField<int>("ownedStates"); }
        void SetOwnedStates(int value) const { WriteField<int>("ownedStates", value); }
        int settledStates() const { return ReadField<int>("settledStates"); }
        void SetSettledStates(int value) const { WriteField<int>("settledStates", value); }
        bool rebelsAtWar() const { return ReadField<bool>("rebelsAtWar"); }
        void SetRebelsAtWar(bool value) const { WriteField<bool>("rebelsAtWar", value); }
        float grossMonthly() const { return ReadField<float>("grossMonthly"); }
        void SetGrossMonthly(float value) const { WriteField<float>("grossMonthly", value); }
        float netMonthly() const { return ReadField<float>("netMonthly"); }
        void SetNetMonthly(float value) const { WriteField<float>("netMonthly", value); }
    };
}
