#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DesignAdvisor : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignAdvisor(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DesignAdvisor") {}
    public:
        void* Begin(void* d, void* it, bool mirrorOn, int year) const { void* args[] = { d, it, &mirrorOn, &year }; return CallStatic("Begin", args, 4); }
        void* Try_(void* b, void* e) const { void* args[] = { b, e }; return CallStatic("Try", args, 2); }
        void Deltas(void* b, void* after, void* into) const { void* args[] = { b, after, into }; CallStatic("Deltas", args, 3); }
        void* FixSteps(void* b, void* into) const { void* args[] = { b, into }; return CallStatic("FixSteps", args, 2); }
        void* RecommendSteps(void* b, void* into) const { void* args[] = { b, into }; return CallStatic("RecommendSteps", args, 2); }
        void* ScoreName(void* d) const { void* args[] = { d }; return CallStatic("ScoreName", args, 1); }
        float CheaperScoreKeep() const { return ReadStaticField<float>("CheaperScoreKeep"); }
        float CheaperMin() const { return ReadStaticField<float>("CheaperMin"); }
        float BetterMin() const { return ReadStaticField<float>("BetterMin"); }
        float DearRatio() const { return ReadStaticField<float>("DearRatio"); }
        int MaxRecommendations() const { return ReadStaticField<int>("MaxRecommendations"); }
    };
}
