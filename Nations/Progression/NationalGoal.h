#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class NationalGoal : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationalGoal(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "NationalGoal") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        void* targetName() const { return ReadField<void*>("targetName"); }
        void SetTargetName(void* value) const { WriteField<void*>("targetName", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
        int startYear() const { return ReadField<int>("startYear"); }
        void SetStartYear(int value) const { WriteField<int>("startYear", value); }
        int targetStartTiles() const { return ReadField<int>("targetStartTiles"); }
        void SetTargetStartTiles(int value) const { WriteField<int>("targetStartTiles", value); }
        int targetCapital() const { return ReadField<int>("targetCapital"); }
        void SetTargetCapital(int value) const { WriteField<int>("targetCapital", value); }
        void* states() const { return ReadField<void*>("states"); }
        void SetStates(void* value) const { WriteField<void*>("states", value); }
        float stabilityTarget() const { return ReadField<float>("stabilityTarget"); }
        void SetStabilityTarget(float value) const { WriteField<float>("stabilityTarget", value); }
        int quietSince() const { return ReadField<int>("quietSince"); }
        void SetQuietSince(int value) const { WriteField<int>("quietSince", value); }
        float incomeStart() const { return ReadField<float>("incomeStart"); }
        void SetIncomeStart(float value) const { WriteField<float>("incomeStart", value); }
        void* last() const { return ReadField<void*>("last"); }
        void SetLast(void* value) const { WriteField<void*>("last", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
        void* holders() const { return ReadField<void*>("holders"); }
    };
}
