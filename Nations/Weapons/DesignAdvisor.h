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
        void* Begin(void* d, void* it, bool mirrorOn, int year) const { void* __callArgs[] = { d, it, &mirrorOn, &year }; return CallStatic("Begin", __callArgs, 4); }
        void* Try_(void* b, void* e) const { void* __callArgs[] = { b, e }; return CallStatic("Try", __callArgs, 2); }
        void Deltas(void* b, void* after, void* into) const { void* __callArgs[] = { b, after, into }; CallStatic("Deltas", __callArgs, 3); }
        void* FixSteps(void* b, void* into) const { void* __callArgs[] = { b, into }; return CallStatic("FixSteps", __callArgs, 2); }
        void* RecommendSteps(void* b, void* into) const { void* __callArgs[] = { b, into }; return CallStatic("RecommendSteps", __callArgs, 2); }
        void* ScoreName(void* d) const { void* __callArgs[] = { d }; return CallStatic("ScoreName", __callArgs, 1); }
        float CheaperScoreKeep() const { return ReadStaticField<float>("CheaperScoreKeep"); }
        float CheaperMin() const { return ReadStaticField<float>("CheaperMin"); }
        float BetterMin() const { return ReadStaticField<float>("BetterMin"); }
        float DearRatio() const { return ReadStaticField<float>("DearRatio"); }
        int MaxRecommendations() const { return ReadStaticField<int>("MaxRecommendations"); }
    };
}
