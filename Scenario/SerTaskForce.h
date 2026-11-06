#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerTaskForce : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerTaskForce(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerTaskForce") {}
    public:
        int key() const { return ReadField<int>("key"); }
        void SetKey(int value) const { WriteField<int>("key", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int targetNation() const { return ReadField<int>("targetNation"); }
        void SetTargetNation(int value) const { WriteField<int>("targetNation", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int stage() const { return ReadField<int>("stage"); }
        void SetStage(int value) const { WriteField<int>("stage", value); }
        int embarkTile() const { return ReadField<int>("embarkTile"); }
        void SetEmbarkTile(int value) const { WriteField<int>("embarkTile", value); }
        int landTile() const { return ReadField<int>("landTile"); }
        void SetLandTile(int value) const { WriteField<int>("landTile", value); }
        int goalTile() const { return ReadField<int>("goalTile"); }
        void SetGoalTile(int value) const { WriteField<int>("goalTile", value); }
        int stageAgeTicks() const { return ReadField<int>("stageAgeTicks"); }
        void SetStageAgeTicks(int value) const { WriteField<int>("stageAgeTicks", value); }
        int attempts() const { return ReadField<int>("attempts"); }
        void SetAttempts(int value) const { WriteField<int>("attempts", value); }
        void* escortFleetIndex() const { return ReadField<void*>("escortFleetIndex"); }
        void SetEscortFleetIndex(void* value) const { WriteField<void*>("escortFleetIndex", value); }
        void* divisionIndex() const { return ReadField<void*>("divisionIndex"); }
        void SetDivisionIndex(void* value) const { WriteField<void*>("divisionIndex", value); }
    };
}
