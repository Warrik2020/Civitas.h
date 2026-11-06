#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerEthnogenesis : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerEthnogenesis(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerEthnogenesis") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void SetFormat(int value) const { WriteField<int>("format", value); }
        void* cellAxis() const { return ReadField<void*>("cellAxis"); }
        void SetCellAxis(void* value) const { WriteField<void*>("cellAxis", value); }
        void* cellSector() const { return ReadField<void*>("cellSector"); }
        void SetCellSector(void* value) const { WriteField<void*>("cellSector", value); }
        void* cellLo() const { return ReadField<void*>("cellLo"); }
        void SetCellLo(void* value) const { WriteField<void*>("cellLo", value); }
        void* cellHi() const { return ReadField<void*>("cellHi"); }
        void SetCellHi(void* value) const { WriteField<void*>("cellHi", value); }
        void* cellSeen() const { return ReadField<void*>("cellSeen"); }
        void SetCellSeen(void* value) const { WriteField<void*>("cellSeen", value); }
        void* cellOwner() const { return ReadField<void*>("cellOwner"); }
        void SetCellOwner(void* value) const { WriteField<void*>("cellOwner", value); }
        void* cellScore() const { return ReadField<void*>("cellScore"); }
        void SetCellScore(void* value) const { WriteField<void*>("cellScore", value); }
        void* cellPush() const { return ReadField<void*>("cellPush"); }
        void SetCellPush(void* value) const { WriteField<void*>("cellPush", value); }
        void* lastFold() const { return ReadField<void*>("lastFold"); }
        void SetLastFold(void* value) const { WriteField<void*>("lastFold", value); }
        void* coolAxis() const { return ReadField<void*>("coolAxis"); }
        void SetCoolAxis(void* value) const { WriteField<void*>("coolAxis", value); }
        void* coolLo() const { return ReadField<void*>("coolLo"); }
        void SetCoolLo(void* value) const { WriteField<void*>("coolLo", value); }
        void* coolHi() const { return ReadField<void*>("coolHi"); }
        void SetCoolHi(void* value) const { WriteField<void*>("coolHi", value); }
        void* coolUntil() const { return ReadField<void*>("coolUntil"); }
        void SetCoolUntil(void* value) const { WriteField<void*>("coolUntil", value); }
        void* forges() const { return ReadField<void*>("forges"); }
        void SetForges(void* value) const { WriteField<void*>("forges", value); }
        void* cradles() const { return ReadField<void*>("cradles"); }
        void SetCradles(void* value) const { WriteField<void*>("cradles", value); }
    };
}
