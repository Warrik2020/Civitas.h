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
        void* Of(void* it) const { void* args[] = { it }; return CallStatic("Of", args, 1); }
        bool Known(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Known", args, 1); }
        void Tick(void* it, int tick, bool ai) const { void* args[] = { it, &tick, &ai }; CallStatic("Tick", args, 3); }
        float ArmsIndex(void* it, int year) const { void* args[] = { it, &year }; return CallStaticValue<float>("ArmsIndex", args, 2); }
        float ResearchIndex(void* it) const { void* args[] = { it }; return CallStaticValue<float>("ResearchIndex", args, 1); }
        float InServiceScore(void* it, int dom) const { void* args[] = { it, &dom }; return CallStaticValue<float>("InServiceScore", args, 2); }
        void* InServiceDesign(void* it, int dom, bool armedOnly = false) const { void* args[] = { it, &dom, &armedOnly }; return CallStatic("InServiceDesign", args, 3); }
        void EvaluateRivals(int selfId, void* it, void* relations, void* ctx) const { void* args[] = { &selfId, it, relations, &ctx }; CallStatic("EvaluateRivals", args, 4); }
        void* ChaseTechs(void* it) const { void* args[] = { it }; return CallStatic("ChaseTechs", args, 1); }
        float ResearchMul(void* it, int tech) const { void* args[] = { it, &tech }; return CallStaticValue<float>("ResearchMul", args, 2); }
        void* RivalCopy(void* it, int slot, void* current, int year) const { void* args[] = { it, &slot, current, &year }; return CallStatic("RivalCopy", args, 4); }
        bool IsCopy(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("IsCopy", args, 1); }
        void* Figure(void* it) const { void* args[] = { it }; return CallStatic("Figure", args, 1); }
        void* Breakdown(void* it) const { void* args[] = { it }; return CallStatic("Breakdown", args, 1); }
        void ChasersOf(int nationId, void* internals, void* into) const { void* args[] = { &nationId, internals, into }; CallStatic("ChasersOf", args, 3); }
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
        float arms() const { return ReadField<float>("arms"); }
        void SetArms(float value) const { WriteField<float>("arms", value); }
        float research() const { return ReadField<float>("research"); }
        void SetResearch(float value) const { WriteField<float>("research", value); }
        float index() const { return ReadField<float>("index"); }
        void SetIndex(float value) const { WriteField<float>("index", value); }
        int nextTick() const { return ReadField<int>("nextTick"); }
        void SetNextTick(int value) const { WriteField<int>("nextTick", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void SetBornTick(int value) const { WriteField<int>("bornTick", value); }
        int now() const { return ReadField<int>("now"); }
        void SetNow(int value) const { WriteField<int>("now", value); }
        int nextCopyTick() const { return ReadField<int>("nextCopyTick"); }
        void SetNextCopyTick(int value) const { WriteField<int>("nextCopyTick", value); }
        int chasing() const { return ReadField<int>("chasing"); }
        void SetChasing(int value) const { WriteField<int>("chasing", value); }
        void* chasingIt() const { return ReadField<void*>("chasingIt"); }
        void SetChasingIt(void* value) const { WriteField<void*>("chasingIt", value); }
        bool chasingPlayer() const { return ReadField<bool>("chasingPlayer"); }
        void SetChasingPlayer(bool value) const { WriteField<bool>("chasingPlayer", value); }
        float lead() const { return ReadField<float>("lead"); }
        void SetLead(float value) const { WriteField<float>("lead", value); }
        void* techs() const { return ReadField<void*>("techs"); }
        bool announced() const { return ReadField<bool>("announced"); }
        void SetAnnounced(bool value) const { WriteField<bool>("announced", value); }
    };
}
