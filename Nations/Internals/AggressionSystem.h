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
        float Default_(int kind) const { void* args[] = { &kind }; return CallStaticValue<float>("Default", args, 1); }
        void Record(void* it, int nationId, int kind, int otherId, int tick) const { void* args[] = { it, &nationId, &kind, &otherId, &tick }; CallStatic("Record", args, 5); }
        void Add(void* it, int kind, int otherId, float amount) const { void* args[] = { it, &kind, &otherId, &amount }; CallStatic("Add", args, 4); }
        void AddLand(void* it, int otherId, int tiles) const { void* args[] = { it, &otherId, &tiles }; CallStatic("AddLand", args, 3); }
        void AddAnnexation(void* it, int otherId, int tiles) const { void* args[] = { it, &otherId, &tiles }; CallStatic("AddAnnexation", args, 3); }
        void AddExpulsion(void* it, int otherId, float tilesWorth, bool purge) const { void* args[] = { it, &otherId, &tilesWorth, &purge }; CallStatic("AddExpulsion", args, 4); }
        void Tick(void* it, float decayPerTick) const { void* args[] = { it, &decayPerTick }; CallStatic("Tick", args, 2); }
        float Of(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("Of", args, 1); }
        bool IsWary(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("IsWary", args, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void SampleMassing(int nationId, void* it, void* relations, void* mgr, void* grid, void* cfg, void* internals) const { void* args[] = { &nationId, it, relations, mgr, grid, cfg, internals }; CallStatic("SampleMassing", args, 7); }
        float OpinionTerm(void* holder, void* target, bool neighbour) const { void* args[] = { holder, target, &neighbour }; return CallStaticValue<float>("OpinionTerm", args, 3); }
        float ThreatRead(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("ThreatRead", args, 1); }
        float Distrust(void* actor, float weight) const { void* args[] = { actor, &weight }; return CallStaticValue<float>("Distrust", args, 2); }
        void* Tier(float v) const { void* args[] = { &v }; return CallStatic("Tier", args, 1); }
        void* Phrase(int kind) const { void* args[] = { &kind }; return CallStatic("Phrase", args, 1); }
    };
}
