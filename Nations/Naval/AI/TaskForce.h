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
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int targetNation() const { return ReadField<int>("targetNation"); }
        void targetNation(int value) const { WriteField<int>("targetNation", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int stage() const { return ReadField<int>("stage"); }
        void stage(int value) const { WriteField<int>("stage", value); }
        int embarkTile() const { return ReadField<int>("embarkTile"); }
        void embarkTile(int value) const { WriteField<int>("embarkTile", value); }
        int landTile() const { return ReadField<int>("landTile"); }
        void landTile(int value) const { WriteField<int>("landTile", value); }
        int goalTile() const { return ReadField<int>("goalTile"); }
        void goalTile(int value) const { WriteField<int>("goalTile", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void* escorts() const { return ReadField<void*>("escorts"); }
        int stageStartTick() const { return ReadField<int>("stageStartTick"); }
        void stageStartTick(int value) const { WriteField<int>("stageStartTick", value); }
        int attempts() const { return ReadField<int>("attempts"); }
        void attempts(int value) const { WriteField<int>("attempts", value); }
        int launched() const { return ReadField<int>("launched"); }
        void launched(int value) const { WriteField<int>("launched", value); }
    };
}
