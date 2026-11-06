#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class KitIssue : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KitIssue(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "KitIssue") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        int Primary(int s) const { void* args[] = { &s }; return CallValue<int>("Primary", args, 1); }
        float Units(int s) const { void* args[] = { &s }; return CallValue<float>("Units", args, 1); }
        float SlotCount(void* cfg, int s, int men, int soldiers, int cavalry, int tanks, int guns, int cars) const { void* args[] = { cfg, &s, &men, &soldiers, &cavalry, &tanks, &guns, &cars }; return CallStaticValue<float>("SlotCount", args, 8); }
        float SlotCount(void* it, void* t, int s, void* cfg) const { void* args[] = { it, t, &s, cfg }; return CallStaticValue<float>("SlotCount", args, 4); }
        float SlotCount(void* d, int s, void* cfg) const { void* args[] = { d, &s, cfg }; return CallStaticValue<float>("SlotCount", args, 3); }
        void* Carried(void* it, void* d, int s) const { void* args[] = { it, d, &s }; return CallStatic("Carried", args, 3); }
        float Available(void* it, int s, void* want) const { void* args[] = { it, &s, want }; return CallStaticValue<float>("Available", args, 3); }
        float AvailableAny(void* it, int s) const { void* args[] = { it, &s }; return CallStaticValue<float>("AvailableAny", args, 2); }
        float LineUnits(void* it, void* t, int s, int line, void* cfg) const { void* args[] = { it, t, &s, &line, cfg }; return CallStaticValue<float>("LineUnits", args, 5); }
        bool SlotCovered(void* it, void* t, int s, void* cfg, float scale = 1f) const { void* args[] = { it, t, &s, cfg, &scale }; return CallStaticValue<bool>("SlotCovered", args, 5); }
        void* ShortOf(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStatic("ShortOf", args, 3); }
        bool IsShort(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStaticValue<bool>("IsShort", args, 3); }
        bool PileCovered(void* it, void* t, int pool, void* cfg) const { void* args[] = { it, t, &pool, cfg }; return CallStaticValue<bool>("PileCovered", args, 4); }
        void* WouldIssue(void* it, void* t, int s, int line, void* cfg) const { void* args[] = { it, t, &s, &line, cfg }; return CallStatic("WouldIssue", args, 5); }
        void* WouldIssue(void* it, void* t, int s, void* cfg) const { void* args[] = { it, t, &s, cfg }; return CallStatic("WouldIssue", args, 4); }
        float TakeSlot(void* it, void* t, int s, void* cfg, float scale, int flow, void* parts) const { void* args[] = { it, t, &s, cfg, &scale, &flow, parts }; return CallStaticValue<float>("TakeSlot", args, 7); }
        void* Charge(void* it, void* t, void* cfg) const { void* args[] = { it, t, cfg }; return CallStatic("Charge", args, 3); }
        float RaiseScale(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("RaiseScale", args, 1); }
        float RaiseScale(void* cfg, void* it) const { void* args[] = { cfg, it }; return CallStaticValue<float>("RaiseScale", args, 2); }
        void* FromTemplate(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("FromTemplate", args, 2); }
        void AddTemplateShares(void* it, void* t, int s, void* parts) const { void* args[] = { it, t, &s, parts }; CallStatic("AddTemplateShares", args, 4); }
        void* parts() const { return ReadField<void*>("parts"); }
    };
}
