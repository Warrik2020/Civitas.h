#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class TemplateSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TemplateSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "TemplateSystem") {}
    public:
        void* Find(void* it, int id) const { void* __callArgs[] = { it, &id }; return CallStatic("Find", __callArgs, 2); }
        void* CurrentOf(void* it, int cls) const { void* __callArgs[] = { it, &cls }; return CallStatic("CurrentOf", __callArgs, 2); }
        int CurrentId(void* it, int cls) const { void* __callArgs[] = { it, &cls }; return CallStaticValue<int>("CurrentId", __callArgs, 2); }
        void* EnsureDefault(void* it, int cls) const { void* __callArgs[] = { it, &cls }; return CallStatic("EnsureDefault", __callArgs, 2); }
        float CreateFee(void* it, void* draft) const { void* __callArgs[] = { it, draft }; return CallStaticValue<float>("CreateFee", __callArgs, 2); }
        void DesignIds(void* t, void* into) const { void* __callArgs[] = { t, into }; CallStatic("DesignIds", __callArgs, 2); }
        float AdoptFee(void* it, void* design) const { void* __callArgs[] = { it, design }; return CallStaticValue<float>("AdoptFee", __callArgs, 2); }
        void* SlotRefusal(void* it, int slot, void* d) const { void* __callArgs[] = { it, &slot, d }; return CallStatic("SlotRefusal", __callArgs, 3); }
        void* Refusal(void* it, void* draft) const { void* __callArgs[] = { it, draft }; return CallStatic("Refusal", __callArgs, 2); }
        bool Create(void* it, void* draft, bool charge, const char*& refusal, float feeMul = 1.0f) const { void* __callArgs[] = { it, draft, &charge, &refusal, &feeMul }; return CallStaticValue<bool>("Create", __callArgs, 5); }
        void* DefaultName(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("DefaultName", __callArgs, 2); }
        bool MakeCurrent(void* it, int templateId) const { void* __callArgs[] = { it, &templateId }; return CallStaticValue<bool>("MakeCurrent", __callArgs, 2); }
        bool Retire(void* it, int templateId, const char*& refusal) const { void* __callArgs[] = { it, &templateId, &refusal }; return CallStaticValue<bool>("Retire", __callArgs, 3); }
        bool Rename(void* it, int templateId, const char* name, const char*& refusal) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { it, &templateId, managed_2, &refusal }; return CallStaticValue<bool>("Rename", __callArgs, 4); }
        bool Restore(void* it, int templateId, const char*& refusal) const { void* __callArgs[] = { it, &templateId, &refusal }; return CallStaticValue<bool>("Restore", __callArgs, 3); }
        bool AdoptDesign(void* it, void* design, int cls, bool charge, const char*& refusal) const { void* __callArgs[] = { it, design, &cls, &charge, &refusal }; return CallStaticValue<bool>("AdoptDesign", __callArgs, 5); }
        void* SynthesizeLegacy(void* it, int cls, int firearmId) const { void* __callArgs[] = { it, &cls, &firearmId }; return CallStatic("SynthesizeLegacy", __callArgs, 3); }
        void* SlotDesign(void* it, void* t, int slot) const { void* __callArgs[] = { it, t, &slot }; return CallStatic("SlotDesign", __callArgs, 3); }
        void* LineDesign(void* it, void* t, int slot, int line) const { void* __callArgs[] = { it, t, &slot, &line }; return CallStatic("LineDesign", __callArgs, 4); }
        void* LeadDesign(void* it, void* t, int slot) const { void* __callArgs[] = { it, t, &slot }; return CallStatic("LeadDesign", __callArgs, 3); }
        float SlotMean(void* it, void* t, int slot, void* value) const { void* __callArgs[] = { it, t, &slot, value }; return CallStaticValue<float>("SlotMean", __callArgs, 4); }
        float SlotScore(void* it, void* t, int slot) const { void* __callArgs[] = { it, t, &slot }; return CallStaticValue<float>("SlotScore", __callArgs, 3); }
        float ArmourCarriedKg(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("ArmourCarriedKg", __callArgs, 2); }
        void VehicleKit(void* it, void* t, float& attack, float& defence, float& speed) const { void* __callArgs[] = { it, t, &attack, &defence, &speed }; CallStatic("VehicleKit", __callArgs, 5); }
        void* SlotNames(void* it, void* t, int slot) const { void* __callArgs[] = { it, t, &slot }; return CallStatic("SlotNames", __callArgs, 3); }
        void* Describe(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("Describe", __callArgs, 2); }
        void* DescribeCounts(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("DescribeCounts", __callArgs, 2); }
        void* SlotsOf(int pool) const { void* __callArgs[] = { &pool }; return CallStatic("SlotsOf", __callArgs, 1); }
        void PatternsInService(void* it, int pool, void* into, void* cfg = nullptr) const { void* __callArgs[] = { it, &pool, into, cfg }; CallStatic("PatternsInService", __callArgs, 4); }
        void* CurrentOrNull(void* w, int cls) const { void* __callArgs[] = { w, &cls }; return CallStatic("CurrentOrNull", __callArgs, 2); }
        int UsedBy(void* it, int designId) const { void* __callArgs[] = { it, &designId }; return CallStaticValue<int>("UsedBy", __callArgs, 2); }
        bool IsUnarmed(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<bool>("IsUnarmed", __callArgs, 2); }
        void Preview(void* it, void* t, float& attackMul, float& damageTakenMul, float& speedMul) const { void* __callArgs[] = { it, t, &attackMul, &damageTakenMul, &speedMul }; CallStatic("Preview", __callArgs, 5); }
        void* PreviewStats(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStatic("PreviewStats", __callArgs, 2); }
        void Stamp(void* d, void* it, void* t) const { void* __callArgs[] = { d, it, t }; CallStatic("Stamp", __callArgs, 3); }
        void Stamp(void* d, void* it, void* t, void* issue) const { void* __callArgs[] = { d, it, t, issue }; CallStatic("Stamp", __callArgs, 4); }
        void WriteSlot(void* d, void* it, int s, void* design, float weight) const { void* __callArgs[] = { d, it, &s, design, &weight }; CallStatic("WriteSlot", __callArgs, 5); }
        void RecordManifest(void* d, void* it) const { void* __callArgs[] = { d, it }; CallStatic("RecordManifest", __callArgs, 2); }
        void RecordManifest(void* d, void* it, void* t) const { void* __callArgs[] = { d, it, t }; CallStatic("RecordManifest", __callArgs, 3); }
        void RestoreManifest(void* d, void* names, void* makers, void* ids) const { void* __callArgs[] = { d, names, makers, ids }; CallStatic("RestoreManifest", __callArgs, 4); }
        void ForgetDesignIds(void* d) const { void* __callArgs[] = { d }; CallStatic("ForgetDesignIds", __callArgs, 1); }
        void StampNew(void* d, void* it, int templateId, void* issue = nullptr) const { void* __callArgs[] = { d, it, &templateId, issue }; CallStatic("StampNew", __callArgs, 4); }
        void CountFielded(void* mil, void* into) const { void* __callArgs[] = { mil, into }; CallStatic("CountFielded", __callArgs, 2); }
        float SlotComplexityRatio(void* it, void* t, int slot) const { void* __callArgs[] = { it, t, &slot }; return CallStaticValue<float>("SlotComplexityRatio", __callArgs, 3); }
        float TreasuryMul(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("TreasuryMul", __callArgs, 2); }
        float BuildMul(void* it, void* t) const { void* __callArgs[] = { it, t }; return CallStaticValue<float>("BuildMul", __callArgs, 2); }
        int DomainOf(int pool) const { void* __callArgs[] = { &pool }; return CallStaticValue<int>("DomainOf", __callArgs, 1); }
        float PoolDraw(void* it, void* t, int pool, void* cfg) const { void* __callArgs[] = { it, t, &pool, cfg }; return CallStaticValue<float>("PoolDraw", __callArgs, 4); }
        int AdoptGuns() const { return ReadStaticField<int>("AdoptGuns"); }
    };
}
