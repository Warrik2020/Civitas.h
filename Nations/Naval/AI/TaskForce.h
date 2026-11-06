#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval::AI
{
    class TaskForce : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TaskForce(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval.AI", "TaskForce") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
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
        void* divisions() const { return ReadField<void*>("divisions"); }
        void* escorts() const { return ReadField<void*>("escorts"); }
        int stageStartTick() const { return ReadField<int>("stageStartTick"); }
        void SetStageStartTick(int value) const { WriteField<int>("stageStartTick", value); }
        int attempts() const { return ReadField<int>("attempts"); }
        void SetAttempts(int value) const { WriteField<int>("attempts", value); }
        int launched() const { return ReadField<int>("launched"); }
        void SetLaunched(int value) const { WriteField<int>("launched", value); }
    };
}
