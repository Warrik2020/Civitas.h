#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EquipmentTradeSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipmentTradeSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EquipmentTradeSystem") {}
    public:
        float UnitCost(int holderId, int pool, void* ctx) const { void* __callArgs[] = { &holderId, &pool, &ctx }; return CallStaticValue<float>("UnitCost", __callArgs, 3); }
        float Fill(void* it, void* cfg, int pool) const { void* __callArgs[] = { it, cfg, &pool }; return CallStaticValue<float>("Fill", __callArgs, 3); }
        float NeedMul(void* it, void* cfg, int pool) const { void* __callArgs[] = { it, cfg, &pool }; return CallStaticValue<float>("NeedMul", __callArgs, 3); }
        float StockScarcity(float shipped, float stock) const { void* __callArgs[] = { &shipped, &stock }; return CallStaticValue<float>("StockScarcity", __callArgs, 2); }
        float ReceivedValue(int receiverId, int pool, float units, void* ctx, float patternMul = 1.0f) const { void* __callArgs[] = { &receiverId, &pool, &units, &ctx, &patternMul }; return CallStaticValue<float>("ReceivedValue", __callArgs, 5); }
        float GivenValue(int giverId, int pool, float units, void* ctx, float patternMul = 1.0f) const { void* __callArgs[] = { &giverId, &pool, &units, &ctx, &patternMul }; return CallStaticValue<float>("GivenValue", __callArgs, 5); }
        float ShipmentValue(void* item, int performerId, int evaluatorId, void* ctx) const { void* __callArgs[] = { item, &performerId, &evaluatorId, &ctx }; return CallStaticValue<float>("ShipmentValue", __callArgs, 4); }
        float ContractGold(void* item) const { void* __callArgs[] = { item }; return CallStaticValue<float>("ContractGold", __callArgs, 1); }
        float SupplierValue(void* item, int supplierId, int receiverId, void* ctx) const { void* __callArgs[] = { item, &supplierId, &receiverId, &ctx }; return CallStaticValue<float>("SupplierValue", __callArgs, 4); }
        float ReceiverValue(void* item, int receiverId, void* ctx) const { void* __callArgs[] = { item, &receiverId, &ctx }; return CallStaticValue<float>("ReceiverValue", __callArgs, 3); }
        float MaxContractPerTick(int supplierId, int pool, int ticks, void* ctx) const { void* __callArgs[] = { &supplierId, &pool, &ticks, &ctx }; return CallStaticValue<float>("MaxContractPerTick", __callArgs, 4); }
        float MaxContractPrice(int receiverId, float perTick, void* ctx) const { void* __callArgs[] = { &receiverId, &perTick, &ctx }; return CallStaticValue<float>("MaxContractPrice", __callArgs, 3); }
        bool EquipmentValid(void* item, int performerId, void* ctx) const { void* __callArgs[] = { item, &performerId, &ctx }; return CallStaticValue<bool>("EquipmentValid", __callArgs, 3); }
        bool ContractValid(void* item, int supplierId, int receiverId, void* mgr, void* ctx) const { void* __callArgs[] = { item, &supplierId, &receiverId, mgr, &ctx }; return CallStaticValue<bool>("ContractValid", __callArgs, 5); }
        float SolveContractPrice(void* deal, void* item, bool itemInGive, float targetChance, void* mgr, void* ctx, float& achieved) const { void* __callArgs[] = { deal, item, &itemInGive, &targetChance, mgr, &ctx, &achieved }; return CallStaticValue<float>("SolveContractPrice", __callArgs, 7); }
        float Ship(int pool, float units, int giverId, int receiverId, void* ctx, int designId = 0) const { void* __callArgs[] = { &pool, &units, &giverId, &receiverId, &ctx, &designId }; return CallStaticValue<float>("Ship", __callArgs, 6); }
        void* Tick(void** args = nullptr, int count = 0) const { return CallStatic("Tick", args, count); }
    };
}
