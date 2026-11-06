#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AggressionSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AggressionSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AggressionSystem") {}
    public:
        float Default_(int kind) const { void* __callArgs[] = { &kind }; return CallStaticValue<float>("Default", __callArgs, 1); }
        void Record(void* it, int nationId, int kind, int otherId, int tick) const { void* __callArgs[] = { it, &nationId, &kind, &otherId, &tick }; CallStatic("Record", __callArgs, 5); }
        void Add(void* it, int kind, int otherId, float amount) const { void* __callArgs[] = { it, &kind, &otherId, &amount }; CallStatic("Add", __callArgs, 4); }
        void AddLand(void* it, int otherId, int tiles) const { void* __callArgs[] = { it, &otherId, &tiles }; CallStatic("AddLand", __callArgs, 3); }
        void AddAnnexation(void* it, int otherId, int tiles) const { void* __callArgs[] = { it, &otherId, &tiles }; CallStatic("AddAnnexation", __callArgs, 3); }
        void AddExpulsion(void* it, int otherId, float tilesWorth, bool purge) const { void* __callArgs[] = { it, &otherId, &tilesWorth, &purge }; CallStatic("AddExpulsion", __callArgs, 4); }
        void Tick(void* it, float decayPerTick) const { void* __callArgs[] = { it, &decayPerTick }; CallStatic("Tick", __callArgs, 2); }
        float Of(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("Of", __callArgs, 1); }
        bool IsWary(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("IsWary", __callArgs, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void SampleMassing(int nationId, void* it, void* relations, void* mgr, void* grid, void* cfg, void* internals) const { void* __callArgs[] = { &nationId, it, relations, mgr, grid, cfg, internals }; CallStatic("SampleMassing", __callArgs, 7); }
        float OpinionTerm(void* holder, void* target, bool neighbour) const { void* __callArgs[] = { holder, target, &neighbour }; return CallStaticValue<float>("OpinionTerm", __callArgs, 3); }
        float ThreatRead(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("ThreatRead", __callArgs, 1); }
        float Distrust(void* actor, float weight) const { void* __callArgs[] = { actor, &weight }; return CallStaticValue<float>("Distrust", __callArgs, 2); }
        void* Tier(float v) const { void* __callArgs[] = { &v }; return CallStatic("Tier", __callArgs, 1); }
        void* Phrase(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Phrase", __callArgs, 1); }
    };
}
