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
        void* Find(void* it, int id) const { void* args[] = { it, &id }; return CallStatic("Find", args, 2); }
        void* CurrentOf(void* it, int cls) const { void* args[] = { it, &cls }; return CallStatic("CurrentOf", args, 2); }
        int CurrentId(void* it, int cls) const { void* args[] = { it, &cls }; return CallStaticValue<int>("CurrentId", args, 2); }
        void* EnsureDefault(void* it, int cls) const { void* args[] = { it, &cls }; return CallStatic("EnsureDefault", args, 2); }
        float CreateFee(void* it, void* draft) const { void* args[] = { it, draft }; return CallStaticValue<float>("CreateFee", args, 2); }
        void DesignIds(void* t, void* into) const { void* args[] = { t, into }; CallStatic("DesignIds", args, 2); }
        float AdoptFee(void* it, void* design) const { void* args[] = { it, design }; return CallStaticValue<float>("AdoptFee", args, 2); }
        void* SlotRefusal(void* it, int slot, void* d) const { void* args[] = { it, &slot, d }; return CallStatic("SlotRefusal", args, 3); }
        void* Refusal(void* it, void* draft) const { void* args[] = { it, draft }; return CallStatic("Refusal", args, 2); }
        bool Create(void* it, void* draft, bool charge, const char*& refusal, float feeMul = 1f) const { void* args[] = { it, draft, &charge, &refusal, &feeMul }; return CallStaticValue<bool>("Create", args, 5); }
        void* DefaultName(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("DefaultName", args, 2); }
        bool MakeCurrent(void* it, int templateId) const { void* args[] = { it, &templateId }; return CallStaticValue<bool>("MakeCurrent", args, 2); }
        bool Retire(void* it, int templateId, const char*& refusal) const { void* args[] = { it, &templateId, &refusal }; return CallStaticValue<bool>("Retire", args, 3); }
        bool Rename(void* it, int templateId, const char* name, const char*& refusal) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { it, &templateId, managed_2, &refusal }; return CallStaticValue<bool>("Rename", args, 4); }
        bool Restore(void* it, int templateId, const char*& refusal) const { void* args[] = { it, &templateId, &refusal }; return CallStaticValue<bool>("Restore", args, 3); }
        bool AdoptDesign(void* it, void* design, int cls, bool charge, const char*& refusal) const { void* args[] = { it, design, &cls, &charge, &refusal }; return CallStaticValue<bool>("AdoptDesign", args, 5); }
        void* SynthesizeLegacy(void* it, int cls, int firearmId) const { void* args[] = { it, &cls, &firearmId }; return CallStatic("SynthesizeLegacy", args, 3); }
        void* SlotDesign(void* it, void* t, int slot) const { void* args[] = { it, t, &slot }; return CallStatic("SlotDesign", args, 3); }
        void* LineDesign(void* it, void* t, int slot, int line) const { void* args[] = { it, t, &slot, &line }; return CallStatic("LineDesign", args, 4); }
        void* LeadDesign(void* it, void* t, int slot) const { void* args[] = { it, t, &slot }; return CallStatic("LeadDesign", args, 3); }
        float SlotMean(void* it, void* t, int slot, void* value) const { void* args[] = { it, t, &slot, value }; return CallStaticValue<float>("SlotMean", args, 4); }
        float SlotScore(void* it, void* t, int slot) const { void* args[] = { it, t, &slot }; return CallStaticValue<float>("SlotScore", args, 3); }
        float ArmourCarriedKg(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("ArmourCarriedKg", args, 2); }
        void VehicleKit(void* it, void* t, float& attack, float& defence, float& speed) const { void* args[] = { it, t, &attack, &defence, &speed }; CallStatic("VehicleKit", args, 5); }
        void* SlotNames(void* it, void* t, int slot) const { void* args[] = { it, t, &slot }; return CallStatic("SlotNames", args, 3); }
        void* Describe(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("Describe", args, 2); }
        void* DescribeCounts(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("DescribeCounts", args, 2); }
        void* SlotsOf(int pool) const { void* args[] = { &pool }; return CallStatic("SlotsOf", args, 1); }
        void PatternsInService(void* it, int pool, void* into, void* cfg = nullptr) const { void* args[] = { it, &pool, into, cfg }; CallStatic("PatternsInService", args, 4); }
        void* CurrentOrNull(void* w, int cls) const { void* args[] = { w, &cls }; return CallStatic("CurrentOrNull", args, 2); }
        int UsedBy(void* it, int designId) const { void* args[] = { it, &designId }; return CallStaticValue<int>("UsedBy", args, 2); }
        bool IsUnarmed(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<bool>("IsUnarmed", args, 2); }
        void Preview(void* it, void* t, float& attackMul, float& damageTakenMul, float& speedMul) const { void* args[] = { it, t, &attackMul, &damageTakenMul, &speedMul }; CallStatic("Preview", args, 5); }
        void* PreviewStats(void* it, void* t) const { void* args[] = { it, t }; return CallStatic("PreviewStats", args, 2); }
        void Stamp(void* d, void* it, void* t) const { void* args[] = { d, it, t }; CallStatic("Stamp", args, 3); }
        void Stamp(void* d, void* it, void* t, void* issue) const { void* args[] = { d, it, t, issue }; CallStatic("Stamp", args, 4); }
        void WriteSlot(void* d, void* it, int s, void* design, float weight) const { void* args[] = { d, it, &s, design, &weight }; CallStatic("WriteSlot", args, 5); }
        void RecordManifest(void* d, void* it) const { void* args[] = { d, it }; CallStatic("RecordManifest", args, 2); }
        void RecordManifest(void* d, void* it, void* t) const { void* args[] = { d, it, t }; CallStatic("RecordManifest", args, 3); }
        void RestoreManifest(void* d, void* names, void* makers, void* ids) const { void* args[] = { d, names, makers, ids }; CallStatic("RestoreManifest", args, 4); }
        void ForgetDesignIds(void* d) const { void* args[] = { d }; CallStatic("ForgetDesignIds", args, 1); }
        void StampNew(void* d, void* it, int templateId, void* issue = nullptr) const { void* args[] = { d, it, &templateId, issue }; CallStatic("StampNew", args, 4); }
        void CountFielded(void* mil, void* into) const { void* args[] = { mil, into }; CallStatic("CountFielded", args, 2); }
        float SlotComplexityRatio(void* it, void* t, int slot) const { void* args[] = { it, t, &slot }; return CallStaticValue<float>("SlotComplexityRatio", args, 3); }
        float TreasuryMul(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("TreasuryMul", args, 2); }
        float BuildMul(void* it, void* t) const { void* args[] = { it, t }; return CallStaticValue<float>("BuildMul", args, 2); }
        int DomainOf(int pool) const { void* args[] = { &pool }; return CallStaticValue<int>("DomainOf", args, 1); }
        float PoolDraw(void* it, void* t, int pool, void* cfg) const { void* args[] = { it, t, &pool, cfg }; return CallStaticValue<float>("PoolDraw", args, 4); }
        int AdoptGuns() const { return ReadStaticField<int>("AdoptGuns"); }
        void* design() const { return ReadField<void*>("design"); }
        void SetDesign(void* value) const { WriteField<void*>("design", value); }
        int classMask() const { return ReadField<int>("classMask"); }
        void SetClassMask(int value) const { WriteField<int>("classMask", value); }
    };
}
