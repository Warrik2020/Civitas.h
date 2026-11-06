#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class Advancement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Advancement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "Advancement") {}
    public:
        void* Of(void* it) const { void* __callArgs[] = { it }; return CallStatic("Of", __callArgs, 1); }
        bool Known(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("Known", __callArgs, 1); }
        void Tick(void* it, int tick, bool ai) const { void* __callArgs[] = { it, &tick, &ai }; CallStatic("Tick", __callArgs, 3); }
        float ArmsIndex(void* it, int year) const { void* __callArgs[] = { it, &year }; return CallStaticValue<float>("ArmsIndex", __callArgs, 2); }
        float ResearchIndex(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("ResearchIndex", __callArgs, 1); }
        float InServiceScore(void* it, int dom) const { void* __callArgs[] = { it, &dom }; return CallStaticValue<float>("InServiceScore", __callArgs, 2); }
        void* InServiceDesign(void* it, int dom, bool armedOnly = false) const { void* __callArgs[] = { it, &dom, &armedOnly }; return CallStatic("InServiceDesign", __callArgs, 3); }
        void EvaluateRivals(int selfId, void* it, void* relations, void* ctx) const { void* __callArgs[] = { &selfId, it, relations, &ctx }; CallStatic("EvaluateRivals", __callArgs, 4); }
        void* ChaseTechs(void* it) const { void* __callArgs[] = { it }; return CallStatic("ChaseTechs", __callArgs, 1); }
        float ResearchMul(void* it, int tech) const { void* __callArgs[] = { it, &tech }; return CallStaticValue<float>("ResearchMul", __callArgs, 2); }
        void* RivalCopy(void* it, int slot, void* current, int year) const { void* __callArgs[] = { it, &slot, current, &year }; return CallStatic("RivalCopy", __callArgs, 4); }
        bool IsCopy(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("IsCopy", __callArgs, 1); }
        void* Figure(void* it) const { void* __callArgs[] = { it }; return CallStatic("Figure", __callArgs, 1); }
        void* Breakdown(void* it) const { void* __callArgs[] = { it }; return CallStatic("Breakdown", __callArgs, 1); }
        void ChasersOf(int nationId, void* internals, void* into) const { void* __callArgs[] = { &nationId, internals, into }; CallStatic("ChasersOf", __callArgs, 3); }
        int IntervalTicks() const { return ReadStaticField<int>("IntervalTicks"); }
        float ChaseLead() const { return ReadStaticField<float>("ChaseLead"); }
        float WarWeight() const { return ReadStaticField<float>("WarWeight"); }
        float BorderWeight() const { return ReadStaticField<float>("BorderWeight"); }
        float ChaseResearchWeight() const { return ReadStaticField<float>("ChaseResearchWeight"); }
        float CatchUpMul() const { return ReadStaticField<float>("CatchUpMul"); }
        float CopyGain() const { return ReadStaticField<float>("CopyGain"); }
        int CopyCooldownTicks() const { return ReadStaticField<int>("CopyCooldownTicks"); }
        int AnnounceGraceTicks() const { return ReadStaticField<int>("AnnounceGraceTicks"); }
        void* CopyPrefix() const { return ReadStaticField<void*>("CopyPrefix"); }
    };
}
