#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipCampaigns : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipCampaigns(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipCampaigns") {}
    public:
        void Begin(void* world, void* marches, float clamp) const { void* args[] = { world, marches, &clamp }; Call("Begin", args, 3); }
        void Finish() const { Call("Finish", nullptr, 0); }
        bool TryStrengths(void* rel, int id, float& own, float& other) const { void* args[] = { rel, &id, &own, &other }; return CallValue<bool>("TryStrengths", args, 4); }
        void Step(float monthShare, int monthTicks) const { void* args[] = { &monthShare, &monthTicks }; Call("Step", args, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* Of(void* w, int id) const { void* args[] = { w, &id }; return Call("Of", args, 2); }
        bool Targets(int foe) const { void* args[] = { &foe }; return CallValue<bool>("Targets", args, 1); }
        void* rel() const { return ReadField<void*>("rel"); }
        void SetRel(void* value) const { WriteField<void*>("rel", value); }
        int a() const { return ReadField<int>("a"); }
        void SetA(int value) const { WriteField<int>("a", value); }
        int b() const { return ReadField<int>("b"); }
        void SetB(int value) const { WriteField<int>("b", value); }
        float strA() const { return ReadField<float>("strA"); }
        void SetStrA(float value) const { WriteField<float>("strA", value); }
        float strB() const { return ReadField<float>("strB"); }
        void SetStrB(float value) const { WriteField<float>("strB", value); }
        float menA() const { return ReadField<float>("menA"); }
        void SetMenA(float value) const { WriteField<float>("menA", value); }
        float menB() const { return ReadField<float>("menB"); }
        void SetMenB(float value) const { WriteField<float>("menB", value); }
        void* sectors() const { return ReadField<void*>("sectors"); }
        void* contacts() const { return ReadField<void*>("contacts"); }
        void* divs() const { return ReadField<void*>("divs"); }
        float local() const { return ReadField<float>("local"); }
        void SetLocal(float value) const { WriteField<float>("local", value); }
        float localMen() const { return ReadField<float>("localMen"); }
        void SetLocalMen(float value) const { WriteField<float>("localMen", value); }
        float attack() const { return ReadField<float>("attack"); }
        void SetAttack(float value) const { WriteField<float>("attack", value); }
        float pushSum() const { return ReadField<float>("pushSum"); }
        void SetPushSum(float value) const { WriteField<float>("pushSum", value); }
        float reserve() const { return ReadField<float>("reserve"); }
        void SetReserve(float value) const { WriteField<float>("reserve", value); }
        float reserveMen() const { return ReadField<float>("reserveMen"); }
        void SetReserveMen(float value) const { WriteField<float>("reserveMen", value); }
        bool ordered() const { return ReadField<bool>("ordered"); }
        void SetOrdered(bool value) const { WriteField<bool>("ordered", value); }
        void* objective() const { return ReadField<void*>("objective"); }
        void SetObjective(void* value) const { WriteField<void*>("objective", value); }
        int64_t sumX() const { return ReadField<int64_t>("sumX"); }
        void SetSumX(int64_t value) const { WriteField<int64_t>("sumX", value); }
        int64_t sumY() const { return ReadField<int64_t>("sumY"); }
        void SetSumY(int64_t value) const { WriteField<int64_t>("sumY", value); }
        int war() const { return ReadField<int>("war"); }
        void SetWar(int value) const { WriteField<int>("war", value); }
        void* a() const { return ReadField<void*>("a"); }
        void* b() const { return ReadField<void*>("b"); }
        void* d() const { return ReadField<void*>("d"); }
        void SetD(void* value) const { WriteField<void*>("d", value); }
        void* aim() const { return ReadField<void*>("aim"); }
        void SetAim(void* value) const { WriteField<void*>("aim", value); }
        bool has() const { return ReadField<bool>("has"); }
        void SetHas(bool value) const { WriteField<bool>("has", value); }
        bool lineOnly() const { return ReadField<bool>("lineOnly"); }
        void SetLineOnly(bool value) const { WriteField<bool>("lineOnly", value); }
        bool onFallback() const { return ReadField<bool>("onFallback"); }
        void SetOnFallback(bool value) const { WriteField<bool>("onFallback", value); }
        float push() const { return ReadField<float>("push"); }
        void SetPush(float value) const { WriteField<float>("push", value); }
        void* objective() const { return ReadField<void*>("objective"); }
        void SetObjective(void* value) const { WriteField<void*>("objective", value); }
        void* front() const { return ReadField<void*>("front"); }
        void SetFront(void* value) const { WriteField<void*>("front", value); }
        void* army() const { return ReadField<void*>("army"); }
        void SetArmy(void* value) const { WriteField<void*>("army", value); }
    };
}
