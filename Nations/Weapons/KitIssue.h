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
        int Primary(int s) const { void* __callArgs[] = { &s }; return CallValue<int>("Primary", __callArgs, 1); }
        float Units(int s) const { void* __callArgs[] = { &s }; return CallValue<float>("Units", __callArgs, 1); }
        float SlotCount(void* cfg, int s, int men, int soldiers, int cavalry, int tanks, int guns, int cars) const { void* __callArgs[] = { cfg, &s, &men, &soldiers, &cavalry, &tanks, &guns, &cars }; return CallStaticValue<float>("SlotCount", __callArgs, 8); }
        float SlotCount(void* it, void* t, int s, void* cfg) const { void* __callArgs[] = { it, t, &s, cfg }; return CallStaticValue<float>("SlotCount", __callArgs, 4); }
        float SlotCount(void* d, int s, void* cfg) const { void* __callArgs[] = { d, &s, cfg }; return CallStaticValue<float>("SlotCount", __callArgs, 3); }
        void* Carried(void* it, void* d, int s) const { void* __callArgs[] = { it, d, &s }; return CallStatic("Carried", __callArgs, 3); }
        float Available(void* it, int s, void* want) const { void* __callArgs[] = { it, &s, want }; return CallStaticValue<float>("Available", __callArgs, 3); }
        float AvailableAny(void* it, int s) const { void* __callArgs[] = { it, &s }; return CallStaticValue<float>("AvailableAny", __callArgs, 2); }
        float LineUnits(void* it, void* t, int s, int line, void* cfg) const { void* __callArgs[] = { it, t, &s, &line, cfg }; return CallStaticValue<float>("LineUnits", __callArgs, 5); }
        bool SlotCovered(void* it, void* t, int s, void* cfg, float scale = 1.0f) const { void* __callArgs[] = { it, t, &s, cfg, &scale }; return CallStaticValue<bool>("SlotCovered", __callArgs, 5); }
        void* ShortOf(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStatic("ShortOf", __callArgs, 3); }
        bool IsShort(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStaticValue<bool>("IsShort", __callArgs, 3); }
        bool PileCovered(void* it, void* t, int pool, void* cfg) const { void* __callArgs[] = { it, t, &pool, cfg }; return CallStaticValue<bool>("PileCovered", __callArgs, 4); }
        void* WouldIssue(void* it, void* t, int s, int line, void* cfg) const { void* __callArgs[] = { it, t, &s, &line, cfg }; return CallStatic("WouldIssue", __callArgs, 5); }
        void* WouldIssue(void* it, void* t, int s, void* cfg) const { void* __callArgs[] = { it, t, &s, cfg }; return CallStatic("WouldIssue", __callArgs, 4); }
        float TakeSlot(void* it, void* t, int s, void* cfg, float scale, int flow, void* parts) const { void* __callArgs[] = { it, t, &s, cfg, &scale, &flow, parts }; return CallStaticValue<float>("TakeSlot", __callArgs, 7); }
        void* Charge(void* it, void* t, void* cfg) const { void* __callArgs[] = { it, t, cfg }; return CallStatic("Charge", __callArgs, 3); }
        float RaiseScale(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("RaiseScale", __callArgs, 1); }
        float RaiseScale(void* cfg, void* it) const { void* __callArgs[] = { cfg, it }; return CallStaticValue<float>("RaiseScale", __callArgs, 2); }
        void* FromTemplate(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("FromTemplate", __callArgs, 2); }
        void AddTemplateShares(void* it, void* t, int s, void* parts) const { void* __callArgs[] = { it, t, &s, parts }; CallStatic("AddTemplateShares", __callArgs, 4); }
        void* parts() const { return ReadField<void*>("parts"); }
    };
}
