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
        void* Of(void* it) const { void* __callArgs[] = { it }; return CallStatic("Of", __callArgs, 1); }
        float Of(void* it, int designId) const { void* __callArgs[] = { it, &designId }; return CallStaticValue<float>("Of", __callArgs, 2); }
        float Plain(void* it, int pool) const { void* __callArgs[] = { it, &pool }; return CallStaticValue<float>("Plain", __callArgs, 2); }
        void Gather(void* it, int pool, void* into) const { void* __callArgs[] = { it, &pool, into }; CallStatic("Gather", __callArgs, 3); }
        bool FitsSlot(int slot, void* d) const { void* __callArgs[] = { &slot, d }; return CallStaticValue<bool>("FitsSlot", __callArgs, 2); }
        bool SameRole(void* a, void* b) const { void* __callArgs[] = { a, b }; return CallStaticValue<bool>("SameRole", __callArgs, 2); }
        bool SameSignature(int slot, void* a, void* b) const { void* __callArgs[] = { &slot, a, b }; return CallStaticValue<bool>("SameSignature", __callArgs, 3); }
        int PoolOfSlot(int slot) const { void* __callArgs[] = { &slot }; return CallStaticValue<int>("PoolOfSlot", __callArgs, 1); }
        void* BestInStock(void* it, int slot, void* signature, float minUnits) const { void* __callArgs[] = { it, &slot, signature, &minUnits }; return CallStatic("BestInStock", __callArgs, 4); }
        float Add(void* it, int designId, int pool, float units, int flow) const { void* __callArgs[] = { it, &designId, &pool, &units, &flow }; return CallStaticValue<float>("Add", __callArgs, 5); }
        float Take(void* it, int designId, int pool, float units, int flow) const { void* __callArgs[] = { it, &designId, &pool, &units, &flow }; return CallStaticValue<float>("Take", __callArgs, 5); }
        float TakeForSlot(void* it, int slot, void* want, float units, int flow, void* parts, bool allowPlain, bool worstFirst = false) const { void* __callArgs[] = { it, &slot, want, &units, &flow, parts, &allowPlain, &worstFirst }; return CallStaticValue<float>("TakeForSlot", __callArgs, 8); }
        void SetPlain(void* it, int pool, float units) const { void* __callArgs[] = { it, &pool, &units }; CallStatic("SetPlain", __callArgs, 3); }
        void RestoreBucket(void* it, int designId, float units) const { void* __callArgs[] = { it, &designId, &units }; CallStatic("RestoreBucket", __callArgs, 3); }
        void RemarkPlain(void* it) const { void* __callArgs[] = { it }; CallStatic("RemarkPlain", __callArgs, 1); }
        void* TemplatePattern(void* it, int pool) const { void* __callArgs[] = { it, &pool }; return CallStatic("TemplatePattern", __callArgs, 2); }
        void PruneMissing(void* it) const { void* __callArgs[] = { it }; CallStatic("PruneMissing", __callArgs, 1); }
        float Scrap(void* it, int designId) const { void* __callArgs[] = { it, &designId }; return CallStaticValue<float>("Scrap", __callArgs, 2); }
        void Relabel(void* it, int fromId, int toId) const { void* __callArgs[] = { it, &fromId, &toId }; CallStatic("Relabel", __callArgs, 3); }
        void FileLot(void* it, int fromNationId, int designId, int pool, float units, int kind, int tick) const { void* __callArgs[] = { it, &fromNationId, &designId, &pool, &units, &kind, &tick }; CallStatic("FileLot", __callArgs, 7); }
        bool CapturedOf(void* it, int designId, void* lot) const { void* __callArgs[] = { it, &designId, &lot }; return CallStaticValue<bool>("CapturedOf", __callArgs, 3); }
        void PruneLots(void* it) const { void* __callArgs[] = { it }; CallStatic("PruneLots", __callArgs, 1); }
        float TransferOut(void* giver, int pool, float units, void* moved) const { void* __callArgs[] = { giver, &pool, &units, moved }; return CallStaticValue<float>("TransferOut", __callArgs, 4); }
        float TransferDesign(void* giver, int designId, float units, void* moved) const { void* __callArgs[] = { giver, &designId, &units, moved }; return CallStaticValue<float>("TransferDesign", __callArgs, 4); }
        float PreviewTransferOut(void* giver, int pool, float skip, float units, void* into, void* reserved = nullptr) const { void* __callArgs[] = { giver, &pool, &skip, &units, into, reserved }; return CallStaticValue<float>("PreviewTransferOut", __callArgs, 6); }
        bool CarriedByTemplate(void* it, int designId) const { void* __callArgs[] = { it, &designId }; return CallStaticValue<bool>("CarriedByTemplate", __callArgs, 2); }
        void RecomputeTotals(void* it) const { void* __callArgs[] = { it }; CallStatic("RecomputeTotals", __callArgs, 1); }
        bool Check(void* it, const char*& error) const { void* __callArgs[] = { it, &error }; return CallStaticValue<bool>("Check", __callArgs, 2); }
    };
}
