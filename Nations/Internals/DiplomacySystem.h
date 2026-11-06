#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class DiplomacySystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DiplomacySystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "DiplomacySystem") {}
    public:
        void TickCheap(void* relations, void* internals, void* cfg) const { void* args[] = { relations, internals, cfg }; CallStatic("TickCheap", args, 3); }
        void TickCheap(void* relations, void* internals, void* cfg, int tick, float ticksPerYear) const { void* args[] = { relations, internals, cfg, &tick, &ticksPerYear }; CallStatic("TickCheap", args, 5); }
        void Pass(void* relations, void* internals, void* power, void* cfg, float grudgeDecay, float infraDecay, void* homelandOpinion = nullptr, void* kinship = nullptr, void* incursionMalus = nullptr, void* panNational = nullptr, void* localPolitics = nullptr) const { void* args[] = { relations, internals, power, cfg, &grudgeDecay, &infraDecay, homelandOpinion, kinship, incursionMalus, panNational, localPolitics }; CallStatic("Pass", args, 11); }
        float Power(void* n, void* it, void* cfg) const { void* args[] = { n, it, cfg }; return CallStaticValue<float>("Power", args, 3); }
    };
}
