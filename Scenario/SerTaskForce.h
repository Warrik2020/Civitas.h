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
        void key(int value) const { WriteField<int>("key", value); }
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
        int stageAgeTicks() const { return ReadField<int>("stageAgeTicks"); }
        void stageAgeTicks(int value) const { WriteField<int>("stageAgeTicks", value); }
        int attempts() const { return ReadField<int>("attempts"); }
        void attempts(int value) const { WriteField<int>("attempts", value); }
        void* escortFleetIndex() const { return ReadField<void*>("escortFleetIndex"); }
        void escortFleetIndex(void* value) const { WriteField<void*>("escortFleetIndex", value); }
        void* divisionIndex() const { return ReadField<void*>("divisionIndex"); }
        void divisionIndex(void* value) const { WriteField<void*>("divisionIndex", value); }
    };
}
