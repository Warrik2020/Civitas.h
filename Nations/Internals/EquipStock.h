#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EquipStock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipStock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EquipStock") {}
    public:
        void* Of(void* it) const { void* args[] = { it }; return CallStatic("Of", args, 1); }
        float Of(void* it, int designId) const { void* args[] = { it, &designId }; return CallStaticValue<float>("Of", args, 2); }
        float Plain(void* it, int pool) const { void* args[] = { it, &pool }; return CallStaticValue<float>("Plain", args, 2); }
        void Gather(void* it, int pool, void* into) const { void* args[] = { it, &pool, into }; CallStatic("Gather", args, 3); }
        bool FitsSlot(int slot, void* d) const { void* args[] = { &slot, d }; return CallStaticValue<bool>("FitsSlot", args, 2); }
        bool SameRole(void* a, void* b) const { void* args[] = { a, b }; return CallStaticValue<bool>("SameRole", args, 2); }
        bool SameSignature(int slot, void* a, void* b) const { void* args[] = { &slot, a, b }; return CallStaticValue<bool>("SameSignature", args, 3); }
        int PoolOfSlot(int slot) const { void* args[] = { &slot }; return CallStaticValue<int>("PoolOfSlot", args, 1); }
        void* BestInStock(void* it, int slot, void* signature, float minUnits) const { void* args[] = { it, &slot, signature, &minUnits }; return CallStatic("BestInStock", args, 4); }
        float Add(void* it, int designId, int pool, float units, int flow) const { void* args[] = { it, &designId, &pool, &units, &flow }; return CallStaticValue<float>("Add", args, 5); }
        float Take(void* it, int designId, int pool, float units, int flow) const { void* args[] = { it, &designId, &pool, &units, &flow }; return CallStaticValue<float>("Take", args, 5); }
        float TakeForSlot(void* it, int slot, void* want, float units, int flow, void* parts, bool allowPlain, bool worstFirst = false) const { void* args[] = { it, &slot, want, &units, &flow, parts, &allowPlain, &worstFirst }; return CallStaticValue<float>("TakeForSlot", args, 8); }
        void SetPlain(void* it, int pool, float units) const { void* args[] = { it, &pool, &units }; CallStatic("SetPlain", args, 3); }
        void RestoreBucket(void* it, int designId, float units) const { void* args[] = { it, &designId, &units }; CallStatic("RestoreBucket", args, 3); }
        void RemarkPlain(void* it) const { void* args[] = { it }; CallStatic("RemarkPlain", args, 1); }
        void* TemplatePattern(void* it, int pool) const { void* args[] = { it, &pool }; return CallStatic("TemplatePattern", args, 2); }
        void PruneMissing(void* it) const { void* args[] = { it }; CallStatic("PruneMissing", args, 1); }
        float Scrap(void* it, int designId) const { void* args[] = { it, &designId }; return CallStaticValue<float>("Scrap", args, 2); }
        void Relabel(void* it, int fromId, int toId) const { void* args[] = { it, &fromId, &toId }; CallStatic("Relabel", args, 3); }
        void FileLot(void* it, int fromNationId, int designId, int pool, float units, int kind, int tick) const { void* args[] = { it, &fromNationId, &designId, &pool, &units, &kind, &tick }; CallStatic("FileLot", args, 7); }
        bool CapturedOf(void* it, int designId, void* lot) const { void* args[] = { it, &designId, &lot }; return CallStaticValue<bool>("CapturedOf", args, 3); }
        void PruneLots(void* it) const { void* args[] = { it }; CallStatic("PruneLots", args, 1); }
        float TransferOut(void* giver, int pool, float units, void* moved) const { void* args[] = { giver, &pool, &units, moved }; return CallStaticValue<float>("TransferOut", args, 4); }
        float TransferDesign(void* giver, int designId, float units, void* moved) const { void* args[] = { giver, &designId, &units, moved }; return CallStaticValue<float>("TransferDesign", args, 4); }
        float PreviewTransferOut(void* giver, int pool, float skip, float units, void* into, void* reserved = nullptr) const { void* args[] = { giver, &pool, &skip, &units, into, reserved }; return CallStaticValue<float>("PreviewTransferOut", args, 6); }
        bool CarriedByTemplate(void* it, int designId) const { void* args[] = { it, &designId }; return CallStaticValue<bool>("CarriedByTemplate", args, 2); }
        void RecomputeTotals(void* it) const { void* args[] = { it }; CallStatic("RecomputeTotals", args, 1); }
        bool Check(void* it, const char*& error) const { void* args[] = { it, &error }; return CallStaticValue<bool>("Check", args, 2); }
    };
}
