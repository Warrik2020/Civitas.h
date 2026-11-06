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
        void format(int value) const { WriteField<int>("format", value); }
        void* cellAxis() const { return ReadField<void*>("cellAxis"); }
        void cellAxis(void* value) const { WriteField<void*>("cellAxis", value); }
        void* cellSector() const { return ReadField<void*>("cellSector"); }
        void cellSector(void* value) const { WriteField<void*>("cellSector", value); }
        void* cellLo() const { return ReadField<void*>("cellLo"); }
        void cellLo(void* value) const { WriteField<void*>("cellLo", value); }
        void* cellHi() const { return ReadField<void*>("cellHi"); }
        void cellHi(void* value) const { WriteField<void*>("cellHi", value); }
        void* cellSeen() const { return ReadField<void*>("cellSeen"); }
        void cellSeen(void* value) const { WriteField<void*>("cellSeen", value); }
        void* cellOwner() const { return ReadField<void*>("cellOwner"); }
        void cellOwner(void* value) const { WriteField<void*>("cellOwner", value); }
        void* cellScore() const { return ReadField<void*>("cellScore"); }
        void cellScore(void* value) const { WriteField<void*>("cellScore", value); }
        void* cellPush() const { return ReadField<void*>("cellPush"); }
        void cellPush(void* value) const { WriteField<void*>("cellPush", value); }
        void* lastFold() const { return ReadField<void*>("lastFold"); }
        void lastFold(void* value) const { WriteField<void*>("lastFold", value); }
        void* coolAxis() const { return ReadField<void*>("coolAxis"); }
        void coolAxis(void* value) const { WriteField<void*>("coolAxis", value); }
        void* coolLo() const { return ReadField<void*>("coolLo"); }
        void coolLo(void* value) const { WriteField<void*>("coolLo", value); }
        void* coolHi() const { return ReadField<void*>("coolHi"); }
        void coolHi(void* value) const { WriteField<void*>("coolHi", value); }
        void* coolUntil() const { return ReadField<void*>("coolUntil"); }
        void coolUntil(void* value) const { WriteField<void*>("coolUntil", value); }
        void* forges() const { return ReadField<void*>("forges"); }
        void forges(void* value) const { WriteField<void*>("forges", value); }
        void* cradles() const { return ReadField<void*>("cradles"); }
        void cradles(void* value) const { WriteField<void*>("cradles", value); }
    };
}
